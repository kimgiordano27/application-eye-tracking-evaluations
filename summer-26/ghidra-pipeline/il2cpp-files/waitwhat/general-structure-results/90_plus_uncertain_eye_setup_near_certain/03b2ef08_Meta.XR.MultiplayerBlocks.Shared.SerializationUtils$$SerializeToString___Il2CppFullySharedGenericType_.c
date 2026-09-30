/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.SerializationUtils$$SerializeToString<__Il2CppFullySharedGenericType>
ENTRY_POINT: 03b2ef08
PROGRAM: waitwhat-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_16;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


long Meta_XR_MultiplayerBlocks_Shared_SerializationUtils__SerializeToString<__Il2CppFullySharedGenericType>
               (ulong param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  long unaff_x23;
  ulong uVar8;
  long unaff_x24;
  int iVar9;
  long *unaff_x28;
  
  if ((param_1 & 1) == 0) {
    if (*(int *)(param_2 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      param_2 = *unaff_x28;
    }
    lVar7 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
    lVar4 = *(long *)(*(long *)(param_2 + 0xb8) + 8);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_031c09d4(lVar7);
    }
    plVar3 = (long *)Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                               (lVar7);
    FUN_042e4268(plVar3,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10));
    if (lVar4 == 0) goto LAB_03b2f2cc;
    FUN_0524b264(lVar4);
    unaff_x23 = unaff_x24;
  }
  else {
    if (*(int *)(param_2 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      param_2 = *unaff_x28;
    }
    if (*(long *)(*(long *)(param_2 + 0xb8) + 8) == 0) goto LAB_03b2f2cc;
    plVar3 = (long *)FUN_0524b1e4();
    lVar7 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_031c09d4(lVar7);
    }
    if (plVar3 != (long *)0x0) {
      if (*(byte *)(lVar7 + 0x130) <= *(byte *)(*plVar3 + 0x130)) {
        if (*(long *)(*(long *)(*plVar3 + 200) + (ulong)*(byte *)(lVar7 + 0x130) * 8 + -8) != lVar7)
        {
          plVar3 = (long *)0x0;
        }
        goto LAB_03b2f008;
      }
    }
    plVar3 = (long *)0x0;
  }
LAB_03b2f008:
  lVar7 = *unaff_x28;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar7 = *unaff_x28;
  }
  if ((**(long **)(lVar7 + 0xb8) != 0) &&
     (FUN_0484e0ac(**(long **)(lVar7 + 0xb8),*(undefined8 *)PTR_DAT_070f24e0), unaff_x23 != 0)) {
    FUN_03a2dd30(unaff_x23);
    iVar2 = FUN_069e8e08(unaff_x23,0);
    puVar1 = PTR_DAT_070f24f0;
    if (0 < iVar2) {
      iVar9 = 0;
      do {
        lVar7 = FUN_069e983c(unaff_x23,iVar9,0);
        if ((unaff_x22 & 1) == 0) {
          if ((lVar7 == 0) || (lVar4 = FUN_069d3b50(lVar7,0), lVar4 == 0)) goto LAB_03b2f2cc;
          uVar5 = FUN_069d710c(lVar4,0);
          if ((uVar5 & 1) != 0) goto LAB_03b2f0b8;
        }
        else {
LAB_03b2f0b8:
          if (unaff_x20 == 0) goto LAB_03b2f2cc;
          uVar5 = *(ulong *)(unaff_x20 + 0x18);
          if (0 < (int)uVar5) {
            uVar8 = 0;
            do {
              if (*(uint *)(unaff_x20 + 0x18) <= uVar8) {
LAB_03b2f2d0:
                    /* WARNING: Subroutine does not return */
                FUN_03188ce0();
              }
              if (lVar7 == 0) goto LAB_03b2f2cc;
              lVar4 = FUN_069d3c20(lVar7,*(undefined8 *)(unaff_x20 + 0x20 + uVar8 * 8),0);
              if (lVar4 != 0) goto LAB_03b2f12c;
              uVar8 = uVar8 + 1;
            } while ((uVar5 & 0xffffffff) != uVar8);
          }
          lVar4 = *unaff_x28;
          if (*(int *)(lVar4 + 0xe4) == 0) {
            thunk_FUN_031e5338();
            lVar4 = *unaff_x28;
          }
          if (**(long **)(lVar4 + 0xb8) == 0) goto LAB_03b2f2cc;
          FUN_0484e5dc(**(long **)(lVar4 + 0xb8),lVar7,*(undefined8 *)puVar1);
        }
LAB_03b2f12c:
        iVar9 = iVar9 + 1;
      } while (iVar9 != iVar2);
    }
    while( true ) {
      lVar7 = *unaff_x28;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        lVar7 = *unaff_x28;
      }
      lVar4 = **(long **)(lVar7 + 0xb8);
      if (lVar4 == 0) break;
      if (*(int *)(lVar4 + 0x20) < 1) {
        return unaff_x21;
      }
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        lVar4 = **(long **)(*unaff_x28 + 0xb8);
        if (lVar4 == 0) break;
      }
      lVar7 = FUN_0484e760(lVar4,*(undefined8 *)PTR_DAT_070f24e8);
      if ((lVar7 == 0) ||
         (FUN_03a2dd30(lVar7,plVar3,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x18)),
         unaff_x21 == 0)) break;
      FUN_042e4c6c(unaff_x21,plVar3,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x20));
      iVar2 = FUN_069e8e08(lVar7,0);
      if (0 < iVar2) {
        iVar9 = 0;
        do {
          lVar4 = FUN_069e983c(lVar7,iVar9,0);
          if ((unaff_x22 & 1) == 0) {
            if ((lVar4 == 0) || (lVar6 = FUN_069d3b50(lVar4,0), lVar6 == 0)) goto LAB_03b2f2cc;
            uVar5 = FUN_069d710c(lVar6,0);
            if ((uVar5 & 1) != 0) goto LAB_03b2f224;
          }
          else {
LAB_03b2f224:
            if (unaff_x20 == 0) goto LAB_03b2f2cc;
            uVar5 = *(ulong *)(unaff_x20 + 0x18);
            if (0 < (int)uVar5) {
              uVar8 = 0;
              do {
                if (*(uint *)(unaff_x20 + 0x18) <= uVar8) goto LAB_03b2f2d0;
                if (lVar4 == 0) goto LAB_03b2f2cc;
                lVar6 = FUN_069d3c20(lVar4,*(undefined8 *)(unaff_x20 + 0x20 + uVar8 * 8),0);
                if (lVar6 != 0) goto LAB_03b2f298;
                uVar8 = uVar8 + 1;
              } while ((uVar5 & 0xffffffff) != uVar8);
            }
            lVar6 = *unaff_x28;
            if (*(int *)(lVar6 + 0xe4) == 0) {
              thunk_FUN_031e5338();
              lVar6 = *unaff_x28;
            }
            if (**(long **)(lVar6 + 0xb8) == 0) goto LAB_03b2f2cc;
            FUN_0484e5dc(**(long **)(lVar6 + 0xb8),lVar4,*(undefined8 *)puVar1);
          }
LAB_03b2f298:
          iVar9 = iVar9 + 1;
        } while (iVar9 != iVar2);
      }
    }
  }
LAB_03b2f2cc:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


