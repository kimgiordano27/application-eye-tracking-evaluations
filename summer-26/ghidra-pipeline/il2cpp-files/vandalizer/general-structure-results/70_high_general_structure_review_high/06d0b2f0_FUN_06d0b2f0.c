/*
FUNCTION_NAME: FUN_06d0b2f0
ENTRY_POINT: 06d0b2f0
PROGRAM: vandalizer-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void FUN_06d0b2f0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  
  if ((bRam0000000007a50c03 & 1) == 0) {
    FUN_031f20f4(
                UnityEngine_UIElements_StyleValuePropertyBag<StyleEnum<TextOverflowPosition>,_TextOverflowPosition>_TypeInfo
                );
    FUN_031f20f4(PTR_DAT_0759b2a8);
    FUN_031f20f4(System_Collections_Generic_List<HTTP2FrameHeaderAndPayload>_TypeInfo);
    bRam0000000007a50c03 = 1;
  }
  plVar8 = (long *)(param_1 + 0x38);
  if (*plVar8 == 0) {
    lVar2 = thunk_FUN_0322f148(*(undefined8 *)
                                System_Collections_Generic_List<HTTP2FrameHeaderAndPayload>_TypeInfo
                              );
    FUN_06d0c82c();
    *plVar8 = lVar2;
    thunk_FUN_0329bf60(plVar8,lVar2);
  }
  plVar3 = (long *)FUN_06d0b734(param_1);
  uVar4 = FUN_06d0b7c8(param_1);
  puVar1 = PTR_DAT_0759b2a8;
  if (*(long *)(param_1 + 0x30) != 0) {
    lVar2 = FUN_055f2ee8(*(long *)(param_1 + 0x30),
                         *(undefined8 *)
                          UnityEngine_UIElements_StyleValuePropertyBag<StyleEnum<TextOverflowPosition>,_TextOverflowPosition>_TypeInfo
                        );
    lVar7 = *(long *)puVar1;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar7);
    }
    uVar5 = FUN_06e587d8(plVar3,0,0);
    if ((uVar5 & 1) != 0) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      uVar5 = FUN_06e587d8(uVar4,0,0);
      if ((lVar2 != 0) && ((uVar5 & 1) != 0)) {
        if (plVar3 != (long *)0x0) {
          lVar7 = *plVar8;
          uVar6 = (**(code **)(*plVar3 + 0x5a8))(plVar3,0,*(undefined8 *)(*plVar3 + 0x5b0));
          if (lVar7 != 0) {
            FUN_06d0ca54(lVar7,uVar6,lVar2,uVar4);
            return;
          }
        }
        goto LAB_06d0b450;
      }
    }
    return;
  }
LAB_06d0b450:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


