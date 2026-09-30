/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<XmlTextWriter.Namespace>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 028e107c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


void System_Array_EmptyInternalEnumerator<XmlTextWriter_Namespace>__System_Collections_IEnumerator_Reset
               (undefined8 param_1)

{
  long lVar1;
  long lVar2;
  int in_w10;
  long unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  int unaff_w22;
  long unaff_x23;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long *unaff_x25;
  long *unaff_x26;
  long in_stack_00000008;
  
  if (in_w10 == 0) {
    thunk_FUN_01c1d1e8(param_1);
  }
  FUN_032e04b8();
  if (unaff_x23 != 0) {
    lVar1 = FUN_031e5740();
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01c72394(lVar5);
    }
    if (lVar1 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = thunk_FUN_01c495e4(lVar1,lVar5);
      if (lVar2 == 0) goto LAB_028e1288;
    }
    *(long *)(unaff_x19 + 0x30) = lVar2;
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01c72394(lVar5);
    }
    if ((lVar1 != 0) && (lVar2 = thunk_FUN_01c495e4(lVar1,lVar5), lVar2 == 0)) {
LAB_028e1288:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d748(lVar1,lVar5);
    }
    if (unaff_w22 == 0) {
      *(undefined8 *)(unaff_x19 + 0x10) = 0;
    }
    else {
      FUN_028e0a14();
      uVar3 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x180);
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar3 = FUN_032e04b8(uVar3,0);
      if (in_stack_00000008 == 0) goto LAB_028e1284;
      lVar1 = FUN_031e5740(in_stack_00000008,*(undefined8 *)PhotonManager_TypeInfo,uVar3,0);
      lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01c72394(lVar5);
      }
      if (lVar1 == 0) {
        FUN_032f25c4(0x10,0);
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      lVar2 = thunk_FUN_01c495e4(lVar1,lVar5);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d748(lVar1,lVar5);
      }
      if (0 < *(int *)(lVar2 + 0x18)) {
        uVar4 = 0;
        do {
          if (*(uint *)(lVar2 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4ac();
          }
          FUN_028e0adc();
          uVar4 = uVar4 + 1;
        } while ((long)uVar4 < (long)*(int *)(lVar2 + 0x18));
      }
    }
    *(undefined4 *)(unaff_x19 + 0x2c) = unaff_w21;
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    lVar1 = FUN_0329f684(0);
    if (lVar1 != 0) {
      FUN_0282be2c();
      return;
    }
  }
LAB_028e1284:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


