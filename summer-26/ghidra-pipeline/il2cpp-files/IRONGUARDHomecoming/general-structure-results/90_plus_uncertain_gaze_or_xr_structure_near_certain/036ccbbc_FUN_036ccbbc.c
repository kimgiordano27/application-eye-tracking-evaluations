/*
FUNCTION_NAME: FUN_036ccbbc
ENTRY_POINT: 036ccbbc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 131
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_7;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_3;functionality_data_collection_or_telemetry_hits_3
*/


void FUN_036ccbbc(undefined1 param_1 [16],undefined1 param_2 [16],undefined8 param_3,
                 undefined8 param_4,long param_5,long param_6)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_04834214 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Net_FileWebRequest__ctor__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_FocusOutEvent_<>c_<_cctor>b__0_0__);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
    thunk_FUN_01efb3a4(Method_OVRPlugin_FovfPair_get_Item__);
    DAT_04834214 = 1;
  }
  local_70 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  plVar7 = *(long **)(param_5 + 0x68);
  uVar1 = 0;
  if (plVar7 != (long *)0x0) {
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)Method_System_Net_FileWebRequest__ctor__) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_036ccc90;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)Method_System_Net_FileWebRequest__ctor__,0);
LAB_036ccc90:
    uVar1 = (*(code *)*puVar2)(plVar7,puVar2[1]);
  }
  if (param_6 == 0) {
LAB_036cce9c:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  FUN_036cc854(param_6,uVar1 & 1);
  if (*(int *)(param_6 + 0x30) == 0) {
    return;
  }
  lVar4 = *(long *)(param_5 + 0x38);
  if (lVar4 == 0) goto LAB_036cce9c;
  local_70 = *(undefined8 *)(lVar4 + 0x168);
  uStack_88 = *(undefined8 *)(lVar4 + 0x150);
  local_90 = *(undefined8 *)(lVar4 + 0x148);
  uStack_78 = *(undefined8 *)(lVar4 + 0x160);
  uVar10 = *(undefined8 *)(lVar4 + 0x158);
  uStack_80 = uVar10;
  if (*(int *)(*(long *)Method_OVRPlugin_FovfPair_get_Item__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_03694cd0(&local_90,0);
  uVar8 = FUN_036cc7a4(param_6);
  lVar4 = *(long *)(param_5 + 0x38);
  if (lVar4 == 0) goto LAB_036cce9c;
  local_70 = *(undefined8 *)(lVar4 + 0x168);
  uStack_88 = *(undefined8 *)(lVar4 + 0x150);
  uVar11 = *(undefined8 *)(lVar4 + 0x148);
  uStack_78 = *(undefined8 *)(lVar4 + 0x160);
  uStack_80 = *(undefined8 *)(lVar4 + 0x158);
  uVar3 = param_3;
  local_90 = uVar11;
  FUN_03694d98(&local_90,0);
  uVar9 = FUN_0406761c(0);
  lVar4 = FUN_04070398(param_5,0);
  if (lVar4 == 0) goto LAB_036cce9c;
  FUN_0407de3c(uVar8,uVar10,param_3,uVar9,uVar11,uVar3,param_4,lVar4,0);
  plVar7 = *(long **)(param_5 + 0x58);
  if (plVar7 == (long *)0x0) {
    uVar10 = 0;
  }
  else {
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) ==
            *(long *)Method_UnityEngine_UIElements_FocusOutEvent_<>c_<_cctor>b__0_0__) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_036ccde4;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)
             FUN_01ecb238(plVar7,*(long *)
                                  Method_UnityEngine_UIElements_FocusOutEvent_<>c_<_cctor>b__0_0__,0
                         );
LAB_036ccde4:
    uVar10 = (*(code *)*puVar2)(plVar7,puVar2[1]);
  }
  if (*(int *)(param_6 + 0x30) == 2) {
    puVar2 = (undefined8 *)(param_5 + 0x48);
  }
  else {
    if (*(int *)(param_6 + 0x30) != 1) {
      uVar8 = 0;
      goto LAB_036cce28;
    }
    puVar2 = (undefined8 *)(param_5 + 0x40);
  }
  uVar8 = *puVar2;
LAB_036cce28:
  if (*(int *)(*(long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__ + 0xe0) == 0)
  {
    thunk_FUN_01ee6d7c();
  }
  uVar5 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                    (uVar8,0,0);
  if ((uVar5 & 1) == 0) {
    uVar3 = FUN_036ccea0(param_5,*(undefined4 *)(param_6 + 0x30));
    uVar10 = FUN_036ccf7c(uVar10,uVar3,uVar8);
    if (*(long *)(param_5 + 0x68) != 0) {
      FUN_036cd010(uVar10,uVar8,uVar1 & 1);
    }
  }
  return;
}


