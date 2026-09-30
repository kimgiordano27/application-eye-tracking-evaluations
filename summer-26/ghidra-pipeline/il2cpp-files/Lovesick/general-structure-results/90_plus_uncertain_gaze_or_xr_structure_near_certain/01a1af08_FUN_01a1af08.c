/*
FUNCTION_NAME: FUN_01a1af08
ENTRY_POINT: 01a1af08
PROGRAM: Lovesick-libil2cpp.so
SCORE: 112
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


void FUN_01a1af08(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *plVar11;
  undefined1 local_b0 [32];
  undefined8 local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined8 uStack_7c;
  undefined8 local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  
  if ((DAT_0377a9b8 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Net_HttpWebRequest_RunWithTimeout<HttpWebResponse>__);
    thunk_FUN_00d48444(Method_System_Nullable<InputControlScheme>_get_HasValue__);
    DAT_0377a9b8 = 1;
  }
  puVar1 = Method_System_Net_HttpWebRequest_RunWithTimeout<HttpWebResponse>__;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  local_50 = 0;
  local_38 = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  local_70 = 0;
  local_58 = 0;
  if (param_2 == (long *)0x0) {
LAB_01a1b18c:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar8 = *param_2;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) ==
          *(long *)Method_System_Net_HttpWebRequest_RunWithTimeout<HttpWebResponse>__) {
        puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 4) * 0x10 + 0x138);
        goto LAB_01a1afc0;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar5 = (undefined8 *)
           FUN_00d59724(param_2,*(long *)
                                 Method_System_Net_HttpWebRequest_RunWithTimeout<HttpWebResponse>__,
                        4);
LAB_01a1afc0:
  lVar8 = (*(code *)*puVar5)(param_2,puVar5[1]);
  if (lVar8 == 0) {
    FUN_01a1b190(param_1);
    FUN_01a1b1cc(param_1);
  }
  else {
    lVar6 = FUN_01a0227c(lVar8,0);
    if (lVar6 == 0) {
      FUN_01a1b190(param_1);
    }
    else {
      uVar7 = FUN_01a0227c(lVar8,0);
      lVar8 = *param_2;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
            puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 5) * 0x10 + 0x138);
            goto LAB_01a1b060;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_00d59724(param_2,*(long *)puVar1,5);
LAB_01a1b060:
      uVar4 = (*(code *)*puVar5)(param_2,puVar5[1]);
      FUN_01a1b20c(param_1,uVar7,uVar4);
      *(undefined1 *)(param_1 + 0x58) = 0;
    }
    FUN_01a0238c(&local_90,param_2,0);
    uStack_48 = uStack_88;
    local_50 = local_90;
    uStack_3c = (undefined4)uStack_7c;
    local_38 = (undefined4)((ulong)uStack_7c >> 0x20);
    uStack_44 = uStack_84;
    uStack_40 = uStack_80;
    plVar11 = *(long **)(param_1 + 0x68);
    uVar4 = uStack_88;
    uVar2 = uStack_84;
    uVar3 = uStack_80;
    if (plVar11 != (long *)0x0) {
      lVar8 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) ==
              *(long *)Method_System_Nullable<InputControlScheme>_get_HasValue__) {
            puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 2) * 0x10 + 0x138);
            goto OVRPlugin__IsMixedRealityInitialized;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)
               FUN_00d59724(plVar11,*(long *)
                                     Method_System_Nullable<InputControlScheme>_get_HasValue__,2);
OVRPlugin__IsMixedRealityInitialized:
      (*(code *)*puVar5)(&local_90,plVar11,&local_50,puVar5[1]);
      uVar4 = uStack_88;
      uVar2 = uStack_84;
      uVar3 = uStack_80;
    }
    uStack_60 = uVar3;
    uStack_64 = uVar2;
    uStack_68 = uVar4;
    uStack_5c = (undefined4)uStack_7c;
    local_58 = (undefined4)((ulong)uStack_7c >> 0x20);
    local_70 = local_90;
    if (*(long *)(param_1 + 0x40) == 0) goto LAB_01a1b18c;
    FUN_01a33548(0x3f800000,*(long *)(param_1 + 0x40),local_b0,3,0,0,0);
    *(undefined1 *)(param_1 + 0x59) = 0;
  }
  return;
}


