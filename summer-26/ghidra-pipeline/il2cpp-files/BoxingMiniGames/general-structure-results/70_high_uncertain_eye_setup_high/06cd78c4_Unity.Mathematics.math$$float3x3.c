/*
FUNCTION_NAME: Unity.Mathematics.math$$float3x3
ENTRY_POINT: 06cd78c4
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_14;functionality_eye_api_context_without_clear_sink_hits_3
*/


void Unity_Mathematics_math__float3x3(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  int unaff_w19;
  int iVar9;
  long unaff_x21;
  undefined4 uVar10;
  undefined8 in_stack_00000008;
  
  FUN_03642964();
  FUN_03642964(OVRPlugin_BoneCapsule___TypeInfo);
  FUN_03642964(UnityEngine_Rendering_RenderTargetIdentifier___TypeInfo);
  *(undefined1 *)(unaff_x21 + 0x58b) = 1;
  puVar4 = OVRPlugin_BoneCapsule___TypeInfo;
  puVar3 = OVRPlugin_Bone___TypeInfo;
  puVar2 = UnityEngine_Rendering_RenderTargetIdentifier___TypeInfo;
  iVar9 = 0;
  in_stack_00000008 = 0;
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
          in_stack_00000008 =
               FUN_0427a61c(*(long *)(lVar5 + 0xb8) + 0x28,iVar9,*(undefined8 *)puVar4);
          FUN_05d345c4(&stack0x00000008,0);
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
      if (unaff_w19 < 8) {
        if (unaff_w19 - 6U < 2) {
          if (plVar7 == (long *)0x0) {
LAB_06cd7bd0:
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          uVar6 = FUN_06cd1324(plVar7);
          if (((uVar6 & 1) != 0) || (uVar6 = FUN_06cd14e8(plVar7), (uVar6 & 1) != 0))
          goto LAB_06cd7b40;
        }
        else if (unaff_w19 == 0) {
          if (plVar7 == (long *)0x0) goto LAB_06cd7bd0;
          uVar6 = FUN_06cd14e8(plVar7);
          if ((uVar6 & 1) != 0) {
LAB_06cd7b5c:
            uVar10 = 0;
            goto LAB_06cd7b60;
          }
        }
        else {
          if (unaff_w19 != 1) goto Unity_Mathematics_math__pseudoinverse;
          if (plVar7 == (long *)0x0) goto LAB_06cd7bd0;
          uVar6 = FUN_06cd1324(plVar7);
          if ((uVar6 & 1) != 0) {
            if (0 < (int)plVar7[9]) {
              lVar5 = 0;
              do {
                lVar8 = plVar7[2];
                if (lVar8 == 0) goto LAB_06cd7bd0;
                if (*(uint *)(lVar8 + 0x18) <= (uint)lVar5) goto LAB_06cd7bd4;
                lVar8 = *(long *)(lVar8 + lVar5 * 8 + 0x20);
                if (lVar8 == 0) goto LAB_06cd7bd0;
                FUN_06cbd1c4(lVar8 + 0xd8);
                if (*(long *)(lVar8 + 0x20) != 0) {
                  FUN_06cbd1c4(*(long *)(lVar8 + 0x20) + 0xa8);
                }
                lVar5 = lVar5 + 1;
              } while ((int)lVar5 < (int)plVar7[9]);
            }
            goto LAB_06cd7b5c;
          }
        }
      }
      else if (unaff_w19 - 8U < 2) {
        if (plVar7 == (long *)0x0) goto LAB_06cd7bd0;
        uVar6 = FUN_06cd1324(plVar7);
        if ((uVar6 & 1) != 0) {
          FUN_06cd332c(plVar7);
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


