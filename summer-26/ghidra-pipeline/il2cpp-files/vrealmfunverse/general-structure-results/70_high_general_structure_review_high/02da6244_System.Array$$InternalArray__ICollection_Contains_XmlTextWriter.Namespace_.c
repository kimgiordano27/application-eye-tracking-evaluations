/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<XmlTextWriter.Namespace>
ENTRY_POINT: 02da6244
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


void System_Array__InternalArray__ICollection_Contains<XmlTextWriter_Namespace>(long *param_1)

{
  long *plVar1;
  bool in_ZR;
  undefined8 uVar2;
  long lVar3;
  long unaff_x19;
  undefined8 uVar4;
  long *unaff_x23;
  
  if (!in_ZR) {
LAB_02da64c8:
                    /* WARNING: Subroutine does not return */
    FUN_02b3ce44(param_1);
  }
  thunk_FUN_02bb0e9c();
  lVar3 = *(long *)(unaff_x19 + 0x20);
  if (lVar3 != 0) {
    plVar1 = (long *)(lVar3 + 0x250);
    uVar4 = *(undefined8 *)(lVar3 + 0x250);
    uVar2 = thunk_FUN_02b79644(*unaff_x23);
    FUN_02d6e504();
    param_1 = (long *)FUN_04dc11c8(uVar4,uVar2,0);
    if (param_1 == (long *)0x0) {
      *plVar1 = 0;
    }
    else {
      lVar3 = *unaff_x23;
      if ((*param_1 != lVar3) || (*plVar1 = (long)param_1, *param_1 != lVar3)) goto LAB_02da64c8;
    }
    thunk_FUN_02bb0e9c(plVar1,param_1);
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if (lVar3 != 0) {
      plVar1 = (long *)(lVar3 + 600);
      uVar4 = *(undefined8 *)(lVar3 + 600);
      uVar2 = thunk_FUN_02b79644(*unaff_x23);
      FUN_02d6e504();
      param_1 = (long *)FUN_04dc11c8(uVar4,uVar2,0);
      if (param_1 == (long *)0x0) {
        *plVar1 = 0;
      }
      else {
        lVar3 = *unaff_x23;
        if ((*param_1 != lVar3) || (*plVar1 = (long)param_1, *param_1 != lVar3)) goto LAB_02da64c8;
      }
      thunk_FUN_02bb0e9c(plVar1,param_1);
      lVar3 = *(long *)(unaff_x19 + 0x20);
      if (lVar3 != 0) {
        plVar1 = (long *)(lVar3 + 0x260);
        uVar4 = *(undefined8 *)(lVar3 + 0x260);
        uVar2 = thunk_FUN_02b79644(*unaff_x23);
        FUN_02d6e504();
        param_1 = (long *)FUN_04dc11c8(uVar4,uVar2,0);
        if (param_1 == (long *)0x0) {
          *plVar1 = 0;
        }
        else {
          lVar3 = *unaff_x23;
          if ((*param_1 != lVar3) || (*plVar1 = (long)param_1, *param_1 != lVar3))
          goto LAB_02da64c8;
        }
        thunk_FUN_02bb0e9c(plVar1,param_1);
        lVar3 = *(long *)(unaff_x19 + 0x20);
        if (lVar3 != 0) {
          plVar1 = (long *)(lVar3 + 0x268);
          uVar4 = *(undefined8 *)(lVar3 + 0x268);
          uVar2 = thunk_FUN_02b79644(*unaff_x23);
          FUN_02d6e504();
          param_1 = (long *)FUN_04dc11c8(uVar4,uVar2,0);
          if (param_1 == (long *)0x0) {
            *plVar1 = 0;
          }
          else {
            lVar3 = *unaff_x23;
            if ((*param_1 != lVar3) || (*plVar1 = (long)param_1, *param_1 != lVar3))
            goto LAB_02da64c8;
          }
          thunk_FUN_02bb0e9c(plVar1,param_1);
          lVar3 = *(long *)(unaff_x19 + 0x20);
          if (lVar3 != 0) {
            plVar1 = (long *)(lVar3 + 0x270);
            uVar4 = *(undefined8 *)(lVar3 + 0x270);
            uVar2 = thunk_FUN_02b79644(*unaff_x23);
            FUN_02d6e504();
            param_1 = (long *)FUN_04dc11c8(uVar4,uVar2,0);
            if (param_1 == (long *)0x0) {
              *plVar1 = 0;
            }
            else {
              lVar3 = *unaff_x23;
              if ((*param_1 != lVar3) || (*plVar1 = (long)param_1, *param_1 != lVar3))
              goto LAB_02da64c8;
            }
            thunk_FUN_02bb0e9c(plVar1,param_1);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


