/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsSerializer$$IsTypeSpecified
ENTRY_POINT: 068804b4
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_4
*/


void Unity_VisualScripting_FullSerializer_fsSerializer__IsTypeSpecified(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  uint in_w9;
  long in_x10;
  long in_x11;
  long *unaff_x19;
  long *unaff_x21;
  long *unaff_x22;
  
  puVar2 = Method_System_Collections_Generic_List<KeyValuePair<Rect,_VisualElement>>_Clear__;
  if ((in_w9 < (uint)in_x11) || (*(long *)(*(long *)(param_1 + 200) + in_x11 * 8 + -8) != in_x10)) {
    bVar1 = *(byte *)(*(long *)
                       Method_System_Collections_Generic_List<KeyValuePair<PropertyName,_object>>_set_Capacity__
                     + 0x130);
    if ((in_w9 < bVar1) ||
       (*(long *)(*(long *)(param_1 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)
         Method_System_Collections_Generic_List<KeyValuePair<PropertyName,_object>>_set_Capacity__))
    {
      bVar1 = *(byte *)(*(long *)
                         Method_System_Collections_Generic_List<KeyValuePair<Rect,_VisualElement>>__ctor__
                       + 0x130);
      if ((in_w9 < bVar1) ||
         (*(long *)(*(long *)(param_1 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)Method_System_Collections_Generic_List<KeyValuePair<Rect,_VisualElement>>__ctor__
         )) {
        uVar3 = (**(code **)(*unaff_x19 + 0x4a8))();
        FUN_057aaeec(*(undefined8 *)puVar2,uVar3,*unaff_x22,0);
        return;
      }
      plVar4 = (long *)FUN_032d5d3c(*(undefined8 *)PTR_DAT_07279560,5);
      plVar6 = (long *)Method_System_Collections_Generic_List<KeyValuePair<Transform,_Pose>>__ctor__
      ;
    }
    else {
      plVar4 = (long *)FUN_032d5d3c(*(undefined8 *)PTR_DAT_07279560,5);
      plVar6 = (long *)
               Method_System_Collections_Generic_List<KeyValuePair<string,_JsonSchema>>_GetEnumerator__
      ;
    }
    if (plVar4 == (long *)0x0) goto LAB_06880810;
    if (*plVar6 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = thunk_FUN_032a55a4(*plVar6,*(undefined8 *)(*plVar4 + 0x40));
      if (lVar5 == 0) goto LAB_06880804;
      lVar5 = *plVar6;
    }
    if ((int)plVar4[3] == 0) goto LAB_06880800;
    plVar4[4] = lVar5;
    thunk_FUN_0333a630();
    if (unaff_x19[10] == 0) goto LAB_06880810;
    lVar5 = *(long *)(unaff_x19[10] + 0xa0);
  }
  else {
    plVar4 = (long *)FUN_032d5d3c(*(undefined8 *)PTR_DAT_07279560,5);
    puVar2 = 
    Method_System_Collections_Generic_List<KeyValuePair<Rect,_VisualElement>>_GetEnumerator__;
    if (plVar4 == (long *)0x0) {
LAB_06880810:
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    if (*(long *)
         Method_System_Collections_Generic_List<KeyValuePair<Rect,_VisualElement>>_GetEnumerator__
        == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = thunk_FUN_032a55a4(*(long *)
                                  Method_System_Collections_Generic_List<KeyValuePair<Rect,_VisualElement>>_GetEnumerator__
                                 ,*(undefined8 *)(*plVar4 + 0x40));
      if (lVar5 == 0) goto LAB_06880804;
      lVar5 = *(long *)puVar2;
    }
    if ((int)plVar4[3] == 0) goto LAB_06880800;
    plVar4[4] = lVar5;
    thunk_FUN_0333a630();
    plVar6 = (long *)unaff_x19[10];
    if (plVar6 == (long *)0x0) goto LAB_06880810;
    bVar1 = *(byte *)(*unaff_x21 + 0x130);
    if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x21)) {
                    /* WARNING: Subroutine does not return */
      FUN_032d618c();
    }
    lVar5 = plVar6[0x14];
  }
  if ((lVar5 != 0) &&
     (lVar7 = thunk_FUN_032a55a4(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar7 == 0)) {
LAB_06880804:
    uVar3 = thunk_FUN_032fa790();
                    /* WARNING: Subroutine does not return */
    FUN_032d5dbc(uVar3,0);
  }
  if (1 < *(uint *)(plVar4 + 3)) {
    plVar4[5] = lVar5;
    thunk_FUN_0333a630(plVar4 + 5,lVar5);
    puVar2 = Method_System_Collections_Generic_List<KeyValuePair<Transform,_Pose>>_Add__;
    if (*(long *)Method_System_Collections_Generic_List<KeyValuePair<Transform,_Pose>>_Add__ == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = thunk_FUN_032a55a4(*(long *)
                                  Method_System_Collections_Generic_List<KeyValuePair<Transform,_Pose>>_Add__
                                 ,*(undefined8 *)(*plVar4 + 0x40));
      if (lVar5 == 0) goto LAB_06880804;
      lVar5 = *(long *)puVar2;
    }
    if (2 < *(uint *)(plVar4 + 3)) {
      plVar4[6] = lVar5;
      thunk_FUN_0333a630();
      lVar5 = (**(code **)(*unaff_x19 + 0x4a8))();
      if ((lVar5 != 0) &&
         (lVar7 = thunk_FUN_032a55a4(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar7 == 0))
      goto LAB_06880804;
      if (3 < *(uint *)(plVar4 + 3)) {
        plVar4[7] = lVar5;
        thunk_FUN_0333a630(plVar4 + 7,lVar5);
        if (*unaff_x22 == 0) {
          lVar5 = 0;
        }
        else {
          lVar5 = thunk_FUN_032a55a4(*unaff_x22,*(undefined8 *)(*plVar4 + 0x40));
          if (lVar5 == 0) goto LAB_06880804;
          lVar5 = *unaff_x22;
        }
        if (4 < *(uint *)(plVar4 + 3)) {
          plVar4[8] = lVar5;
          thunk_FUN_0333a630();
          FUN_057aafac(plVar4,0);
          return;
        }
      }
    }
  }
LAB_06880800:
                    /* WARNING: Subroutine does not return */
  Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
}


