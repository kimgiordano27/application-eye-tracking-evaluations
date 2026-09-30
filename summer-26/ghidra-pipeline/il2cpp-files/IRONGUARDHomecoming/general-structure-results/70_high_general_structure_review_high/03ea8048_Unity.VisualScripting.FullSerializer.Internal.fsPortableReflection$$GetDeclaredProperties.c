/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection$$GetDeclaredProperties
ENTRY_POINT: 03ea8048
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_VisualScripting_FullSerializer_Internal_fsPortableReflection__GetDeclaredProperties
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  
  thunk_FUN_01efb3a4(*(undefined8 *)(param_1 + 0x770));
  *(undefined1 *)(unaff_x19 + 0xb75) = 1;
  plVar3 = (long *)FUN_01f08890(*unaff_x21,4);
  puVar1 = PTR_DAT_0457b770;
  if (plVar3 != (long *)0x0) {
    if (*(long *)PTR_DAT_0457b770 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01f116d0(*(long *)PTR_DAT_0457b770,*(undefined8 *)(*plVar3 + 0x40));
      if (lVar4 == 0) goto LAB_03ea81b8;
      lVar4 = *(long *)puVar1;
    }
    if ((int)plVar3[3] != 0) {
      plVar3[4] = lVar4;
      thunk_FUN_01f51358();
      puVar1 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
      if (unaff_x20 == 0) goto LAB_03ea81c4;
      uStack000000000000000c = *(undefined4 *)(unaff_x20 + 0xb4);
      lVar4 = thunk_FUN_01f113fc(*(undefined8 *)
                                  Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                                 ,(long)&stack0x00000008 + 4);
      if ((lVar4 != 0) &&
         (lVar5 = thunk_FUN_01f116d0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)) {
LAB_03ea81b8:
        uVar6 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar6,0);
      }
      puVar2 = Method_UnityEngine_UIElements_TextInputBaseField<int>_get_textInputBase__;
      if (1 < *(uint *)(plVar3 + 3)) {
        plVar3[5] = lVar4;
        thunk_FUN_01f51358(plVar3 + 5,lVar4);
        lVar4 = *(long *)puVar2;
        if (lVar4 == 0) {
          lVar4 = 0;
        }
        else {
          lVar4 = thunk_FUN_01f116d0(lVar4,*(undefined8 *)(*plVar3 + 0x40));
          if (lVar4 == 0) goto LAB_03ea81b8;
          lVar4 = *(long *)puVar2;
        }
        if (2 < *(uint *)(plVar3 + 3)) {
          plVar3[6] = lVar4;
          thunk_FUN_01f51358();
          uStack0000000000000008 = *(undefined4 *)(unaff_x20 + 0xb8);
          lVar4 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,&stack0x00000008);
          if ((lVar4 != 0) &&
             (lVar5 = thunk_FUN_01f116d0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
          goto LAB_03ea81b8;
          if (3 < *(uint *)(plVar3 + 3)) {
            plVar3[7] = lVar4;
            thunk_FUN_01f51358(plVar3 + 7,lVar4);
            FUN_0340ec80(plVar3,0);
            return;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
LAB_03ea81c4:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


