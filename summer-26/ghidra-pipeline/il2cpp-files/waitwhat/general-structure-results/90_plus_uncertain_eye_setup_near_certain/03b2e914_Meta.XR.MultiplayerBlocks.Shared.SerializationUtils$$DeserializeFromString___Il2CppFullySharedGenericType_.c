/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.SerializationUtils$$DeserializeFromString<__Il2CppFullySharedGenericType>
ENTRY_POINT: 03b2e914
PROGRAM: waitwhat-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_11;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x03b2ec1c) */
/* WARNING: Removing unreachable block (ram,0x03b2ed98) */
/* WARNING: Removing unreachable block (ram,0x03b2edac) */

void Meta_XR_MultiplayerBlocks_Shared_SerializationUtils__DeserializeFromString<__Il2CppFullySharedGenericType>
               (ulong param_1)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  long unaff_x19;
  ulong unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  undefined8 uVar11;
  int iVar12;
  long *unaff_x28;
  long unaff_x29;
  undefined8 uVar13;
  
  lVar4 = *unaff_x28;
  if ((param_1 & 1) == 0) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      lVar4 = *unaff_x28;
    }
    lVar8 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x18);
    lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_031c09d4(lVar8);
    }
    plVar5 = (long *)Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                               (lVar8);
    FUN_042e4268(plVar5,*(undefined8 *)(*(long *)(unaff_x22 + 0x38) + 0x20));
    if (lVar4 == 0) goto LAB_03b2ed80;
    FUN_0524b264(lVar4);
  }
  else {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      lVar4 = *unaff_x28;
    }
    if (*(long *)(*(long *)(lVar4 + 0xb8) + 8) == 0) goto LAB_03b2ed80;
    plVar5 = (long *)FUN_0524b1e4();
    lVar4 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x18);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_031c09d4(lVar4);
    }
    if (plVar5 != (long *)0x0) {
      if (*(byte *)(*plVar5 + 0x130) < *(byte *)(lVar4 + 0x130)) {
        plVar5 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(lVar4 + 0x130) * 8 + -8) !=
               lVar4) {
        plVar5 = (long *)0x0;
      }
    }
  }
  lVar4 = *unaff_x28;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar4 = *unaff_x28;
  }
  if ((**(long **)(lVar4 + 0xb8) != 0) &&
     (FUN_0484e0ac(**(long **)(lVar4 + 0xb8),*(undefined8 *)PTR_DAT_070f24e0),
     puVar2 = PTR_DAT_070f24f0, **(long **)(*unaff_x28 + 0xb8) != 0)) {
    FUN_0484e5dc();
    while( true ) {
      lVar4 = *unaff_x28;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        lVar4 = *unaff_x28;
      }
      lVar8 = **(long **)(lVar4 + 0xb8);
      if (lVar8 == 0) break;
      if (*(int *)(lVar8 + 0x20) < 1) {
        if (*(long *)(*(long *)(unaff_x29 + -0x50) + 0x28) == *(long *)(unaff_x29 + -8)) {
          return;
        }
        goto LAB_03b2eddc;
      }
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        lVar8 = **(long **)(*unaff_x28 + 0xb8);
        if (lVar8 == 0) break;
      }
      lVar4 = FUN_0484e760(lVar8,*(undefined8 *)PTR_DAT_070f24e8);
      if (plVar5 == (long *)0x0) break;
      lVar8 = plVar5[3];
      *(undefined4 *)(plVar5 + 3) = 0;
      *(int *)((long)plVar5 + 0x1c) = *(int *)((long)plVar5 + 0x1c) + 1;
      if (0 < (int)lVar8) {
        FUN_0595236c(plVar5[2],0,(int)lVar8,0);
      }
      if (lVar4 == 0) break;
      FUN_03a2dd30(lVar4,plVar5,
                   *(undefined8 *)(*(long *)(*(long *)(unaff_x29 + -0x10) + 0x38) + 0x30));
      FUN_042e54fc(unaff_x29 + -0x48,plVar5,
                   *(undefined8 *)(*(long *)(*(long *)(unaff_x29 + -0x10) + 0x38) + 0x38));
      uVar13 = *(undefined8 *)(unaff_x29 + -0x40);
      uVar11 = *(undefined8 *)(unaff_x29 + -0x48);
      *(undefined8 *)(unaff_x29 + -0x20) = *(undefined8 *)(unaff_x29 + -0x38);
      *(undefined8 *)(unaff_x29 + -0x48) = 0;
      *(long *)(unaff_x29 + -0x40) = unaff_x29 + -0x30;
      *(undefined8 *)(unaff_x29 + -0x28) = uVar13;
      *(undefined8 *)(unaff_x29 + -0x30) = uVar11;
      *(long *)(unaff_x29 + -0x38) = unaff_x29 + -0x10;
      while (uVar6 = FUN_054518b4(unaff_x29 + -0x30,
                                  *(undefined8 *)
                                   (*(long *)(*(long *)(unaff_x29 + -0x10) + 0x38) + 0x70)),
            (uVar6 & 1) != 0) {
        uVar11 = *(undefined8 *)(unaff_x29 + -0x20);
        lVar8 = *(long *)(*(long *)(*(long *)(unaff_x29 + -0x10) + 0x38) + 0x60);
        if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_031c09d4(lVar8);
        }
        lVar8 = thunk_FUN_031c3cac(uVar11,lVar8);
        if (lVar8 != 0) {
          lVar9 = *(long *)(unaff_x19 + 0x10);
          *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
          if (lVar9 == 0) {
            if (*(long *)(*(long *)(unaff_x29 + -0x50) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
              FUN_03188cd8();
            }
            goto LAB_03b2eddc;
          }
          uVar1 = *(uint *)(unaff_x19 + 0x18);
          if (uVar1 < *(uint *)(lVar9 + 0x18)) {
            *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
            *(long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = lVar8;
          }
          else {
            FUN_042e4a64();
          }
        }
      }
      FUN_054518b0(unaff_x29 + -0x30,
                   *(undefined8 *)(*(long *)(*(long *)(unaff_x29 + -0x10) + 0x38) + 0x78));
      iVar3 = FUN_069e8e08(lVar4,0);
      if (0 < iVar3) {
        iVar12 = 0;
        do {
          lVar8 = FUN_069e983c(lVar4,iVar12,0);
          if ((unaff_x20 & 1) == 0) {
            if ((lVar8 == 0) || (lVar9 = FUN_069d3b50(lVar8,0), lVar9 == 0)) goto LAB_03b2ed80;
            uVar6 = FUN_069d710c(lVar9,0);
            if ((uVar6 & 1) != 0) goto LAB_03b2ec7c;
          }
          else {
            if (lVar8 == 0) goto LAB_03b2ed80;
LAB_03b2ec7c:
            puVar7 = *(undefined8 **)(*(long *)(*(long *)(unaff_x29 + -0x10) + 0x38) + 0x80);
            uVar11 = *puVar7;
            pcVar10 = (code *)puVar7[2];
            *(undefined8 *)(unaff_x29 + -0x48) = unaff_x21;
            (*pcVar10)(uVar11,puVar7,lVar8,unaff_x29 + -0x48);
            uVar6 = FUN_03188c88(*(undefined8 *)
                                  (*(long *)(*(long *)(unaff_x29 + -0x10) + 0x38) + 0x88));
            if ((uVar6 & 1) == 0) {
              lVar9 = *unaff_x28;
              if (*(int *)(lVar9 + 0xe4) == 0) {
                thunk_FUN_031e5338();
                lVar9 = *unaff_x28;
              }
              if (**(long **)(lVar9 + 0xb8) == 0) goto LAB_03b2ed80;
              FUN_0484e5dc(**(long **)(lVar9 + 0xb8),lVar8,*(undefined8 *)puVar2);
            }
          }
          iVar12 = iVar12 + 1;
        } while (iVar3 != iVar12);
      }
    }
  }
LAB_03b2ed80:
  if (*(long *)(*(long *)(unaff_x29 + -0x50) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
LAB_03b2eddc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


