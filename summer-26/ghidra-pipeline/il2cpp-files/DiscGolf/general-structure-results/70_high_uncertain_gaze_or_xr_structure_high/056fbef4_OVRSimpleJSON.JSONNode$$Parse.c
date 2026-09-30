/*
FUNCTION_NAME: OVRSimpleJSON.JSONNode$$Parse
ENTRY_POINT: 056fbef4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_5;functionality_data_collection_or_telemetry_hits_1
*/


void OVRSimpleJSON_JSONNode__Parse(undefined8 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  long unaff_x19;
  long unaff_x21;
  undefined8 uVar9;
  undefined4 *__s;
  long unaff_x23;
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -8) = *(undefined8 *)(unaff_x23 + 0x28);
  puVar6 = param_1;
  if ((*(byte *)(unaff_x21 + 0xb8a) & 1) == 0) {
    FUN_02d965b8(OVRPlugin_TrackingConfidence___TypeInfo);
    FUN_02d965b8(OVRPlugin_Vector2f___TypeInfo);
    FUN_02d965b8(OVRPlugin_Vector3f___TypeInfo);
    FUN_02d965b8(PTR_DAT_06a0d0a8);
    puVar6 = (undefined8 *)FUN_02d965b8(PTR_DAT_06a00f70);
    *(undefined1 *)(unaff_x21 + 0xb8a) = 1;
  }
  *(undefined4 *)(unaff_x29 + -0xc) = 0;
  puVar5 = PTR_DAT_06a0d0a8;
  puVar4 = PTR_DAT_06a00f70;
  if (unaff_x19 == 0) {
LAB_056fc0f8:
    if (*(long *)(unaff_x23 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
  }
  else {
    iVar1 = *(int *)(*(long *)PTR_DAT_06a0d0a8 + 0xe4);
    *(undefined4 *)(unaff_x19 + 0x18) = 0;
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    if (iVar1 == 0) {
      thunk_FUN_02df485c();
    }
    uVar9 = *param_1;
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar9 = FUN_0577e604(uVar9,0,unaff_x29 + -0xc,0,0);
    uVar7 = FUN_0576856c(uVar9,0);
    puVar6 = (undefined8 *)0x0;
    if ((uVar7 & 1) != 0) {
      uVar7 = (ulong)*(uint *)(unaff_x29 + -0xc);
      if (*(uint *)(unaff_x29 + -0xc) == 0) {
        __s = (undefined4 *)0x0;
      }
      else {
        __s = (undefined4 *)(&stack0x00000000 + -(uVar7 * 4 + 0xf & 0x7fffffff0));
      }
      memset(__s,0,uVar7 * 4);
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        uVar7 = (ulong)*(uint *)(unaff_x29 + -0xc);
      }
      uVar9 = *param_1;
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar9 = FUN_0577e604(uVar9,uVar7,unaff_x29 + -0xc,__s,0);
      puVar6 = (undefined8 *)FUN_0576856c(uVar9,0);
      if (((ulong)puVar6 & 1) == 0) {
        puVar6 = (undefined8 *)0x0;
      }
      else {
        if (*(int *)(unaff_x29 + -0xc) != 0) {
          uVar7 = 0;
          do {
            lVar8 = *(long *)(unaff_x19 + 0x10);
            uVar2 = *__s;
            *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
            if (lVar8 == 0) goto LAB_056fc0f8;
            uVar3 = *(uint *)(unaff_x19 + 0x18);
            if (uVar3 < *(uint *)(lVar8 + 0x18)) {
              *(uint *)(unaff_x19 + 0x18) = uVar3 + 1;
              *(undefined4 *)(lVar8 + (long)(int)uVar3 * 4 + 0x20) = uVar2;
            }
            else {
              puVar6 = (undefined8 *)FUN_03fb652c();
            }
            uVar7 = uVar7 + 1;
            __s = __s + 1;
          } while (uVar7 < *(uint *)(unaff_x29 + -0xc));
        }
        puVar6 = (undefined8 *)0x1;
      }
    }
    if (*(long *)(unaff_x23 + 0x28) == *(long *)(unaff_x29 + -8)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar6);
}


