/*
FUNCTION_NAME: FUN_06cd7890
ENTRY_POINT: 06cd7890
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_14;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_06cd7890(undefined8 param_1,int param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  int iVar9;
  undefined4 uVar10;
  undefined8 local_58;
  
  if ((DAT_07eea58b & 1) == 0) {
    FUN_03642964(OVRPlugin_Bone___TypeInfo);
    FUN_03642964(OVRPlugin_BoneCapsule___TypeInfo);
    FUN_03642964(UnityEngine_Rendering_RenderTargetIdentifier___TypeInfo);
    DAT_07eea58b = 1;
  }
  puVar4 = OVRPlugin_BoneCapsule___TypeInfo;
  puVar3 = OVRPlugin_Bone___TypeInfo;
  puVar2 = UnityEngine_Rendering_RenderTargetIdentifier___TypeInfo;
  iVar9 = 0;
  local_58 = 0;
  do {
    lVar5 = *(long *)puVar2;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_036a1978();
      lVar5 = *(long *)puVar2;
    }
    lVar8 = *(long *)(lVar5 + 0xb8);
    if (*(int *)(lVar8 + 0x28) <= iVar9) {
      return;
    }
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_036a1978();
      lVar8 = *(long *)(*(long *)puVar2 + 0xb8);
    }
    uVar6 = FUN_0427a61c(lVar8 + 0x28,iVar9,*(undefined8 *)puVar4);
    if (uVar6 == 0) {
LAB_06cd7ab0:
      lVar5 = *(long *)puVar2;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_036a1978();
        lVar5 = *(long *)puVar2;
      }
      FUN_0427b10c(*(long *)(lVar5 + 0xb8) + 0x28,iVar9,*(undefined8 *)puVar3);
      iVar9 = iVar9 + -1;
    }
    else {
      if ((uVar6 & 1) == 0) {
        plVar7 = (long *)FUN_05e63fd8(uVar6,0);
        if (*plVar7 == 0) {
LAB_06cd7a78:
          lVar5 = *(long *)puVar2;
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_036a1978();
            lVar5 = *(long *)puVar2;
          }
          local_58 = FUN_0427a61c(*(long *)(lVar5 + 0xb8) + 0x28,iVar9,*(undefined8 *)puVar4);
          FUN_05d345c4(&local_58,0);
          goto LAB_06cd7ab0;
        }
        plVar7 = (long *)FUN_05e63fd8(uVar6,0);
        plVar7 = (long *)*plVar7;
      }
      else {
        lVar5 = thunk_FUN_036447e0(uVar6,0);
        if (lVar5 == 0) goto LAB_06cd7a78;
        plVar7 = (long *)thunk_FUN_036447e0(uVar6,0);
      }
      if (plVar7 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
        if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2)) {
                    /* WARNING: Subroutine does not return */
          FUN_03643084(plVar7);
        }
      }
      if (param_2 < 8) {
        if (param_2 - 6U < 2) {
          if (plVar7 == (long *)0x0) {
LAB_06cd7bd0:
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          uVar6 = FUN_06cd1324(plVar7,param_1);
          if (((uVar6 & 1) != 0) || (uVar6 = FUN_06cd14e8(plVar7,param_1), (uVar6 & 1) != 0))
          goto LAB_06cd7b40;
        }
        else if (param_2 == 0) {
          if (plVar7 == (long *)0x0) goto LAB_06cd7bd0;
          uVar6 = FUN_06cd14e8(plVar7,param_1);
          if ((uVar6 & 1) != 0) {
LAB_06cd7b5c:
            uVar10 = 0;
            goto LAB_06cd7b60;
          }
        }
        else {
          if (param_2 != 1) goto Unity_Mathematics_math__pseudoinverse;
          if (plVar7 == (long *)0x0) goto LAB_06cd7bd0;
          uVar6 = FUN_06cd1324(plVar7,param_1);
          if ((uVar6 & 1) != 0) {
            if (0 < (int)plVar7[9]) {
              lVar5 = 0;
              do {
                lVar8 = plVar7[2];
                if (lVar8 == 0) goto LAB_06cd7bd0;
                if (*(uint *)(lVar8 + 0x18) <= (uint)lVar5) goto LAB_06cd7bd4;
                lVar8 = *(long *)(lVar8 + lVar5 * 8 + 0x20);
                if (lVar8 == 0) goto LAB_06cd7bd0;
                FUN_06cbd1c4(lVar8 + 0xd8,param_1,0);
                if (*(long *)(lVar8 + 0x20) != 0) {
                  FUN_06cbd1c4(*(long *)(lVar8 + 0x20) + 0xa8,param_1,0);
                }
                lVar5 = lVar5 + 1;
              } while ((int)lVar5 < (int)plVar7[9]);
            }
            goto LAB_06cd7b5c;
          }
        }
      }
      else if (param_2 - 8U < 2) {
        if (plVar7 == (long *)0x0) goto LAB_06cd7bd0;
        uVar6 = FUN_06cd1324(plVar7,param_1);
        if ((uVar6 & 1) != 0) {
          FUN_06cd332c(plVar7,param_1);
        }
      }
      else {
Unity_Mathematics_math__pseudoinverse:
        if (plVar7 == (long *)0x0) goto LAB_06cd7bd0;
LAB_06cd7b40:
        uVar10 = 1;
LAB_06cd7b60:
        if (0 < (int)plVar7[9]) {
          lVar5 = 0;
          do {
            lVar8 = plVar7[2];
            if (lVar8 == 0) goto LAB_06cd7bd0;
            if (*(uint *)(lVar8 + 0x18) <= (uint)lVar5) {
LAB_06cd7bd4:
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            lVar8 = *(long *)(lVar8 + lVar5 * 8 + 0x20);
            if (lVar8 == 0) goto LAB_06cd7bd0;
            uVar6 = FUN_06cb372c(lVar8,uVar10,0);
          } while (((uVar6 & 1) == 0) && (lVar5 = lVar5 + 1, (int)lVar5 < (int)plVar7[9]));
        }
      }
    }
    iVar9 = iVar9 + 1;
  } while( true );
}


