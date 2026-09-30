/*
FUNCTION_NAME: UnityEngine.PlayerConnectionInternal$$UnityEngine.IPlayerEditorConnectionNative.TrySendMessage
ENTRY_POINT: 0615c320
PROGRAM: beastcraft-libil2cpp.so
SCORE: 72
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_6;telemetry_or_network_hits_1;attempted_eye_tracking_permission_or_feature_enable
*/


undefined8
UnityEngine_PlayerConnectionInternal__UnityEngine_IPlayerEditorConnectionNative_TrySendMessage(void)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *unaff_x19;
  long unaff_x20;
  long lVar8;
  undefined4 *unaff_x21;
  ulong uVar9;
  long lVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  FUN_06108a0c();
  FUN_06108e7c(*unaff_x21,unaff_x21[1]);
  FUN_06108dec();
  UnityEngine_Android_Permission__RequestUserPermissions();
  lVar8 = *(long *)(unaff_x20 + 0xd8);
  if (lVar8 != 0) {
    *(undefined4 *)(lVar8 + 0x18) = 0;
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    (**(code **)(*unaff_x19 + 0x218))();
    uVar2 = *(uint *)(unaff_x19 + 0xe);
    uVar9 = (ulong)uVar2;
    if ((int)uVar2 < 1) {
      uVar5 = 0;
    }
    else {
      iVar4 = FUN_03fef0b4(lVar8,*(undefined8 *)UnityEngine_Rendering_BatchBufferTarget_TypeInfo);
      if (iVar4 < (int)uVar2) {
        FUN_03fef0cc(lVar8,uVar2,*(undefined8 *)UnityEngine_Rendering_BatchCullingViewType_TypeInfo)
        ;
      }
      puVar3 = PTR_DAT_06a3ac90;
      lVar10 = 0;
      do {
        puVar1 = (undefined4 *)(unaff_x19[0xd] + lVar10);
        lVar6 = *(long *)(lVar8 + 0x10);
        uVar11 = *puVar1;
        uVar12 = puVar1[1];
        uVar13 = puVar1[2];
        lVar7 = *(long *)puVar3;
        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
        if (lVar6 == 0) goto LAB_0615c46c;
        uVar2 = *(uint *)(lVar8 + 0x18);
        if (uVar2 < *(uint *)(lVar6 + 0x18)) {
          lVar6 = lVar6 + (long)(int)uVar2 * 0xc;
          *(uint *)(lVar8 + 0x18) = uVar2 + 1;
          *(undefined4 *)(lVar6 + 0x20) = uVar11;
          *(undefined4 *)(lVar6 + 0x24) = uVar12;
          *(undefined4 *)(lVar6 + 0x28) = uVar13;
        }
        else {
          FUN_03fef5ac(lVar8,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
        }
        uVar9 = uVar9 - 1;
        lVar10 = lVar10 + 0xc;
      } while (uVar9 != 0);
      uVar5 = 1;
    }
    return uVar5;
  }
LAB_0615c46c:
                    /* WARNING: Subroutine does not return */
  FUN_02e3ccc4();
}


