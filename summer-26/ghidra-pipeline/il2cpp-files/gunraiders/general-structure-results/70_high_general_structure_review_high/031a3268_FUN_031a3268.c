/*
FUNCTION_NAME: FUN_031a3268
ENTRY_POINT: 031a3268
PROGRAM: gunraiders-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;telemetry;frame_behavior;keyword_support
EVIDENCE: validity_or_gating_hits_8;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;eye_or_gaze_keyword_boost_only
*/


/* WARNING: Removing unreachable block (ram,0x031a3580) */

void FUN_031a3268(long param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char local_44 [4];
  
  puVar6 = PTR_DAT_0422fb28;
  if ((DAT_04532411 & 1) == 0) {
    FUN_01c5d288(System_Net_Cache_RequestCache_TypeInfo);
    FUN_01c5d288(OVR_OpenVR_IVRDriverManager__GetDriverName_TypeInfo);
    FUN_01c5d288(PTR_DAT_0422fd68);
    FUN_01c5d288(PTR_DAT_0422fb28);
    DAT_04532411 = 1;
  }
  if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar2 = FUN_032e935c(param_1,0,0);
  if ((uVar2 & 1) == 0) {
    if (param_1 == 0) {
LAB_031a34e0:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    uVar2 = FUN_032ea240(param_1,0);
    if ((uVar2 & 1) == 0) {
      thunk_FUN_01c273e8(PTR_DAT_04231770);
      uVar8 = thunk_FUN_01c496e0();
      uVar9 = thunk_FUN_01c273e8(OVR_OpenVR_IVRIOBuffer__Close_TypeInfo);
      uVar5 = thunk_FUN_01c273e8(OVR_OpenVR_IVRExtendedDisplay__GetWindowBounds_TypeInfo);
      FUN_0323fce4(uVar8,uVar9,uVar5,0);
      goto LAB_031a34bc;
    }
    if (param_2 != 0) {
      lVar3 = FUN_01c5d2fc(*(undefined8 *)PTR_DAT_0422fd68,*(undefined4 *)(param_2 + 0x18));
      if (lVar3 != 0) {
        Oculus_Platform_CAPI__ovr_HttpTransferUpdate_GetID
                  (param_2,lVar3,*(undefined4 *)(lVar3 + 0x18),0);
        if (0 < (int)*(ulong *)(lVar3 + 0x18)) {
          uVar2 = 0;
          uVar7 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
          do {
            if (uVar7 <= uVar2) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4ac();
            }
            uVar7 = FUN_031532a8(*(undefined8 *)(lVar3 + 0x20 + uVar2 * 8),0);
            if ((uVar7 & 1) != 0) {
              thunk_FUN_01c273e8(PTR_DAT_04231770);
              uVar8 = thunk_FUN_01c496e0();
              uVar9 = thunk_FUN_01c273e8(OVR_OpenVR_IVRExtendedDisplay__GetDXGIOutputInfo_TypeInfo);
              FUN_032467a0(uVar8,uVar9,0);
              goto LAB_031a34bc;
            }
            uVar7 = (ulong)*(uint *)(lVar3 + 0x18);
            uVar2 = uVar2 + 1;
          } while ((long)uVar2 < (long)(int)*(uint *)(lVar3 + 0x18));
        }
        puVar6 = System_Net_Cache_RequestCache_TypeInfo;
        lVar4 = *(long *)System_Net_Cache_RequestCache_TypeInfo;
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
          lVar4 = *(long *)puVar6;
        }
        uVar8 = **(undefined8 **)(lVar4 + 0xb8);
        local_44[0] = '\0';
        FUN_0333497c(uVar8,local_44,0);
        lVar4 = *(long *)puVar6;
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(lVar4);
          lVar4 = *(long *)puVar6;
        }
        if (*(long *)(*(long *)(lVar4 + 0xb8) + 8) == 0) {
          if (*(int *)(lVar4 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8(lVar4);
          }
          FUN_031a3168();
        }
        puVar1 = OVR_OpenVR_IVRDriverManager__GetDriverName_TypeInfo;
        if (0 < (int)*(ulong *)(lVar3 + 0x18)) {
          uVar2 = 0;
          uVar7 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
          do {
            if (uVar7 <= uVar2) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4ac();
            }
            lVar4 = *(long *)puVar6;
            uVar9 = *(undefined8 *)(lVar3 + 0x20 + uVar2 * 8);
            if (*(int *)(lVar4 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
              lVar4 = *(long *)puVar6;
            }
            lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
            if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            FUN_0290c824(lVar4,uVar9,param_1,*(undefined8 *)puVar1);
            uVar7 = (ulong)*(uint *)(lVar3 + 0x18);
            uVar2 = uVar2 + 1;
          } while ((long)uVar2 < (long)(int)*(uint *)(lVar3 + 0x18));
        }
        if (local_44[0] != '\0') {
          thunk_FUN_01c216e8(uVar8,0);
        }
        return;
      }
      goto LAB_031a34e0;
    }
    thunk_FUN_01c273e8(PTR_DAT_0422fa20);
    uVar8 = thunk_FUN_01c496e0();
    puVar6 = OVR_OpenVR_IVRIOBuffer__Open_TypeInfo;
  }
  else {
    thunk_FUN_01c273e8(PTR_DAT_0422fa20);
    uVar8 = thunk_FUN_01c496e0();
    puVar6 = OVR_OpenVR_IVRExtendedDisplay__GetWindowBounds_TypeInfo;
  }
  uVar9 = thunk_FUN_01c273e8(puVar6);
  FUN_0323fc78(uVar8,uVar9,0);
LAB_031a34bc:
  uVar9 = thunk_FUN_01c273e8(OVR_OpenVR_IVRExtendedDisplay__GetEyeOutputViewport_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_01c5d37c(uVar8,uVar9);
}


