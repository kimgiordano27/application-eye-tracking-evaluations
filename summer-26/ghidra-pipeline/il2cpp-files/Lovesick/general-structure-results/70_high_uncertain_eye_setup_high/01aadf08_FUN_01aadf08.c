/*
FUNCTION_NAME: FUN_01aadf08
ENTRY_POINT: 01aadf08
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_01aadf08(int param_1,void *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  undefined1 auStack_f0 [96];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar2 = OVRPlugin_OVRP_1_122_0_TypeInfo;
  if ((DAT_0377ce5a & 1) == 0) {
    thunk_FUN_00d48444(
                      UnityEngine_Networking_PlayerConnection_PlayerEditorConnectionEvents_MessageTypeSubscribers_TypeInfo
                      );
    thunk_FUN_00d48444(System_Collections_Generic_ICollection<DelaunayTriangle>_TypeInfo);
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_122_0_TypeInfo);
    DAT_0377ce5a = 1;
  }
  lVar4 = *(long *)puVar2;
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar4 = *(long *)puVar2;
  }
  FUN_0289d8a4(**(undefined8 **)(lVar4 + 0xb8),0);
  lVar6 = *(long *)puVar2;
  lVar4 = **(long **)(lVar6 + 0xb8);
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x18) == 0) {
LAB_01aae080:
      uVar5 = 0;
    }
    else {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar6);
        lVar4 = **(long **)(*(long *)puVar2 + 0xb8);
        if (lVar4 == 0) goto LAB_01aae0e0;
      }
      puVar1 = System_Collections_Generic_ICollection<DelaunayTriangle>_TypeInfo;
      FUN_0132138c(lVar4,0,auStack_f0,
                   *(undefined8 *)System_Collections_Generic_ICollection<DelaunayTriangle>_TypeInfo)
      ;
      memcpy(param_2,auStack_f0,0x60);
      iVar7 = 0;
      while( true ) {
        lVar4 = *(long *)puVar2;
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar4 = *(long *)puVar2;
        }
        lVar6 = **(long **)(lVar4 + 0xb8);
        if (lVar6 == 0) goto LAB_01aae0e0;
        if (*(int *)(lVar6 + 0x18) <= iVar7) goto LAB_01aae080;
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar6 = **(long **)(*(long *)puVar2 + 0xb8);
          if (lVar6 == 0) goto LAB_01aae0e0;
        }
        FUN_0132138c(lVar6,iVar7,auStack_f0,*(undefined8 *)puVar1);
        memcpy(&local_90,auStack_f0,0x60);
        iVar3 = FUN_0289dd2c(&local_90,0);
        if (iVar3 == param_1) break;
        iVar7 = iVar7 + 1;
      }
      lVar4 = *(long *)puVar2;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar4 = *(long *)puVar2;
      }
      if (**(long **)(lVar4 + 0xb8) == 0) goto LAB_01aae0e0;
      FUN_0132138c(**(long **)(lVar4 + 0xb8),iVar7,auStack_f0,*(undefined8 *)puVar1);
      memcpy(param_2,auStack_f0,0x60);
      uVar5 = 1;
    }
    return uVar5;
  }
LAB_01aae0e0:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


