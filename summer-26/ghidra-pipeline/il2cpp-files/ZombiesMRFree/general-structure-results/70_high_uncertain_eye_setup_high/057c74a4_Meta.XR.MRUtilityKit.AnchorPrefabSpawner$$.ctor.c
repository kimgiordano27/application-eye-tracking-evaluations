/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.AnchorPrefabSpawner$$.ctor
ENTRY_POINT: 057c74a4
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_AnchorPrefabSpawner___ctor
               (ulong param_1,long param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x19;
  long unaff_x24;
  undefined *puVar4;
  
  if ((param_1 & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06f9d020);
    *(undefined1 *)(unaff_x24 + 0x22d) = 1;
  }
  FUN_05b32c00(param_2,0);
  if (param_3 == 0) {
    thunk_FUN_03037804(PTR_DAT_06f7c188);
    uVar2 = thunk_FUN_0301080c();
    puVar4 = PTR_DAT_06f9d028;
LAB_057c7610:
    uVar3 = thunk_FUN_03037804(puVar4);
    FUN_05a5e9c8(uVar2,uVar3,0);
                    /* WARNING: Subroutine does not return */
    FUN_02fe93c0(uVar2);
  }
  if (param_2 != 0) {
    *(long *)(param_2 + 0x28) = param_3;
    thunk_FUN_03048534((long *)(param_2 + 0x28),param_3);
    if (param_4 == 0) {
      thunk_FUN_03037804(PTR_DAT_06f7c188);
      uVar2 = thunk_FUN_0301080c();
      puVar4 = PTR_DAT_06f89230;
      goto LAB_057c7610;
    }
    if (param_2 != 0) {
      *(long *)(param_2 + 0x18) = param_4;
      thunk_FUN_03048534((long *)(param_2 + 0x18),param_4);
      puVar4 = PTR_DAT_06f9d020;
      if (param_5 == 0) {
        if (*(int *)(*(long *)PTR_DAT_06f9d020 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
        }
        if (DAT_07395245 == '\0') {
          FUN_02fe925c(PTR_DAT_06f9d020);
          DAT_07395245 = '\x01';
        }
        lVar1 = *(long *)puVar4;
        if (*(int *)(lVar1 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
          lVar1 = *(long *)puVar4;
        }
        param_5 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x10);
      }
      if (param_2 != 0) {
        *(long *)(param_2 + 0x20) = param_5;
        thunk_FUN_03048534((long *)(param_2 + 0x20),param_5);
        if ((*(byte *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x10) + 0x135) & 1)
            == 0) {
          FUN_02feb2c4();
        }
        uVar2 = thunk_FUN_0301080c();
        FUN_0512bed4(uVar2,param_2,
                     *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x18));
        *(undefined8 *)(param_2 + 0x10) = uVar2;
        thunk_FUN_03048534((undefined8 *)(param_2 + 0x10),uVar2);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


