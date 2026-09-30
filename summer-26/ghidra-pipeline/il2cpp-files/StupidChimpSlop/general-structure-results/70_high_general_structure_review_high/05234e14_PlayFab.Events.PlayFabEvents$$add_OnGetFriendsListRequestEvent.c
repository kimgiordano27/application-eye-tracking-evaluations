/*
FUNCTION_NAME: PlayFab.Events.PlayFabEvents$$add_OnGetFriendsListRequestEvent
ENTRY_POINT: 05234e14
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void PlayFab_Events_PlayFabEvents__add_OnGetFriendsListRequestEvent(long param_1)

{
  undefined *puVar1;
  byte bVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  FUN_02d4dc40(*(undefined8 *)(param_1 + 0xbd0));
  FUN_02d4dc40(PTR_DAT_06647a68);
  FUN_02d4dc40(System_Net_Http_Headers_ElementTryParser<NameValueHeaderValue>_TypeInfo);
  FUN_02d4dc40(
              UnityEngine_Rendering_DynamicArray<RenderGraphObjectPool_SharedObjectPoolBase>_TypeInfo
              );
  FUN_02d4dc40(System_Net_Http_Headers_ElementTryParser<NameValueWithParametersHeaderValue>_TypeInfo
              );
  *(undefined1 *)(unaff_x21 + 0x1f0) = 1;
  lVar3 = *unaff_x20;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
    lVar3 = *unaff_x20;
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
  if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x10), lVar3 != 0)) {
    bVar2 = FUN_051bf608(lVar3,0);
    if (*(byte *)(unaff_x19 + 0x21) != (bVar2 & 1)) {
      lVar3 = *unaff_x20;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
        lVar3 = *unaff_x20;
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
      if ((lVar3 == 0) || (lVar3 = *(long *)(lVar3 + 0x10), lVar3 == 0)) goto LAB_05234fb4;
      FUN_051bf610(lVar3,*(undefined1 *)(unaff_x19 + 0x21),0);
    }
    puVar1 = PTR_DAT_06646bd0;
    if (*(char *)(unaff_x19 + 0x20) != '\0') {
      uVar7 = *(undefined4 *)(unaff_x19 + 0x28);
      uVar8 = *(undefined4 *)(unaff_x19 + 0x2c);
      uVar6 = *(undefined4 *)(unaff_x19 + 0x38);
      uVar9 = *(undefined4 *)(unaff_x19 + 0x30);
      uVar10 = *(undefined4 *)(unaff_x19 + 0x34);
      uVar4 = thunk_FUN_02d8a638(*(undefined8 *)
                                  UnityEngine_Rendering_DynamicArray<RenderGraphObjectPool_SharedObjectPoolBase>_TypeInfo
                                );
      FUN_05f36228();
      lVar5 = *(long *)puVar1;
      lVar3 = *(long *)(lVar5 + 0x38);
      if (lVar3 == 0) {
        FUN_02d87268(lVar5);
        lVar3 = *(long *)(lVar5 + 0x38);
      }
      lVar3 = *(long *)(lVar3 + 0x10);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02d8720c();
      }
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      puVar1 = System_Net_Http_Headers_ElementTryParser<NameValueWithParametersHeaderValue>_TypeInfo
      ;
      lVar3 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02d8720c();
      }
      uVar6 = FUN_05f38fb8(uVar7,uVar6,uVar4,*(undefined8 *)puVar1,**(undefined8 **)(lVar3 + 0xb8),0
                          );
      *(undefined4 *)(unaff_x19 + 0x28) = uVar6;
      *(undefined4 *)(unaff_x19 + 0x2c) = uVar8;
      *(undefined4 *)(unaff_x19 + 0x30) = uVar9;
      *(undefined4 *)(unaff_x19 + 0x34) = uVar10;
    }
    return;
  }
LAB_05234fb4:
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


