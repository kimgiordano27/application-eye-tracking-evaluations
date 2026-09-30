/*
FUNCTION_NAME: Unity.Entities.StructuralChange.AddSharedComponentChunks_00000F97$PostfixBurstDelegate$$Invoke
ENTRY_POINT: 030a7238
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long Unity_Entities_StructuralChange_AddSharedComponentChunks_00000F97_PostfixBurstDelegate__Invoke
               (undefined8 *param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  undefined8 *unaff_x22;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  
  FUN_01ab69ac(*param_1);
  FUN_01ab69ac(System_Action<EventData>_TypeInfo);
  FUN_01ab69ac(System_Action<Exception>_TypeInfo);
  FUN_01ab69ac(System_Action<FVRGrabbable>_TypeInfo);
  *(undefined1 *)(unaff_x20 + 0x5a7) = 1;
  lVar5 = thunk_FUN_01a89e68(*unaff_x22);
  FUN_036a1b5c(lVar5,0);
  puVar1 = System_Action<FVRGrabbable>_TypeInfo;
  if (unaff_x19 != 0) {
    uVar6 = FUN_036d3824();
    uVar6 = FUN_025b1328(uVar6,*(undefined8 *)puVar1,0);
    if (lVar5 != 0) {
      FUN_036d38d4(lVar5,uVar6,0);
      uVar2 = FUN_036a1c18();
      FUN_036a1c54(lVar5,uVar2,0);
      uVar6 = FUN_036a45c0();
      FUN_036a460c(lVar5,uVar6,0);
      uVar6 = FUN_036a466c();
      FUN_036a46b8(lVar5,uVar6,0);
      uVar6 = FUN_036a4718();
      FUN_036a4764(lVar5,uVar6,0);
      uVar6 = FUN_036a4d24();
      FUN_036a4d70(lVar5,uVar6,0);
      uVar6 = FUN_036a47c4();
      FUN_036a4810(lVar5,uVar6,0);
      uVar6 = FUN_036a4870();
      FUN_036a48bc(lVar5,uVar6,0);
      uVar6 = FUN_036a491c();
      FUN_036a4968(lVar5,uVar6,0);
      uVar6 = FUN_036a49c8();
      FUN_036a4a14(lVar5,uVar6,0);
      uVar6 = FUN_036aa140();
      FUN_036aa17c(lVar5,uVar6,0);
      uVar6 = FUN_036a34f8();
      FUN_036a3534(lVar5,uVar6,0);
      uVar2 = FUN_036a3768();
      FUN_036a37a4(lVar5,uVar2,0);
      iVar3 = FUN_036a3768(lVar5,0);
      if (0 < iVar3) {
        iVar3 = 0;
        do {
          uVar6 = FUN_036a8700();
          uVar2 = FUN_036aab50();
          FUN_036a93e8(lVar5,uVar6,uVar2,iVar3,0);
          iVar3 = iVar3 + 1;
          iVar4 = FUN_036a3768(lVar5,0);
        } while (iVar3 < iVar4);
      }
      FUN_036aa280(lVar5,0);
      if ((unaff_x21 & 1) != 0) {
        uVar6 = FUN_036a45c0();
        uVar7 = FUN_036a466c();
        uVar8 = FUN_039a67c8(0);
        uVar11 = 0;
        if ((uVar8 & 1) != 0) {
          uVar11 = FUN_036a4718();
          puVar1 = System_Action<Exception>_TypeInfo;
          lVar10 = *(long *)System_Action<Exception>_TypeInfo;
          if (*(int *)(lVar10 + 0xe0) == 0) {
            thunk_FUN_01a58e78(lVar10);
            lVar10 = *(long *)puVar1;
          }
          lVar12 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
          if (lVar12 == 0) {
            if (*(int *)(lVar10 + 0xe0) == 0) {
              thunk_FUN_01a58e78(lVar10);
              lVar10 = *(long *)puVar1;
            }
            uVar13 = **(undefined8 **)(lVar10 + 0xb8);
            lVar12 = thunk_FUN_01a89e68(*(undefined8 *)System_Action<Column>_TypeInfo);
            FUN_021de1ac(lVar12,uVar13,*(undefined8 *)System_Action<EventData>_TypeInfo,0);
            plVar9 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
            *plVar9 = lVar12;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar9,lVar12);
          }
          uVar11 = FUN_01f6d39c(uVar11,lVar12,*(undefined8 *)System_Action<CameraMode>_TypeInfo);
          uVar11 = FUN_01f70920(uVar11,*(undefined8 *)
                                        _Common_UpdateManager_UpdateJobManager<TData>_var);
        }
        iVar3 = FUN_036a2ca8();
        if (0 < iVar3) {
          iVar3 = 0;
          do {
            UnityEngine_TextCore_Text_TextStyle__get_styleOpeningTagArray();
            uVar13 = FUN_036a2d20();
            FUN_036a2dec();
            FUN_036a2eb4(lVar5,uVar13,uVar6,uVar7,uVar11,0);
            iVar3 = iVar3 + 1;
            iVar4 = FUN_036a2ca8();
          } while (iVar3 < iVar4);
        }
      }
      return lVar5;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


