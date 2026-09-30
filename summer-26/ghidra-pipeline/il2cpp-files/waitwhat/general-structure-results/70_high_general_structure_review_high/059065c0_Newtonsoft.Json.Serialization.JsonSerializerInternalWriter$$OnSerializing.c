/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$OnSerializing
ENTRY_POINT: 059065c0
PROGRAM: waitwhat-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__OnSerializing(void)

{
  bool bVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long unaff_x19;
  undefined4 unaff_w20;
  undefined4 unaff_w21;
  long *unaff_x23;
  long in_stack_00000008;
  
  thunk_FUN_031e5338();
  uVar5 = FUN_05906bd4(unaff_w21);
  if ((uVar5 & 1) == 0) {
LAB_059066a8:
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    uVar5 = FUN_05905430();
    if ((uVar5 & 1) != 0) {
                    /* try { // try from 059066c4 to 05a06717 has its CatchHandler @ 0590682c */
      lVar8 = *unaff_x23;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        lVar8 = *unaff_x23;
      }
      if ((*(short *)(*(long *)(lVar8 + 0xb8) + 10) == 0x5c) && (1 < *(int *)(unaff_x19 + 0x10))) {
        uVar3 = FUN_057b9840();
        if (*(int *)(*unaff_x23 + 0xe4) == 0) {
          thunk_FUN_031e5338(*unaff_x23);
        }
        uVar5 = FUN_05906bd4(uVar3);
        if ((uVar5 & 1) != 0) {
          uVar3 = FUN_057b9840();
          if (*(int *)(*unaff_x23 + 0xe4) == 0) {
            thunk_FUN_031e5338(*unaff_x23);
          }
          uVar5 = FUN_05906bd4(uVar3);
          if ((uVar5 & 1) == 0) {
            lVar8 = FUN_058f0440(0);
            if (lVar8 == 0) goto LAB_05906ab0;
                    /* try { // try from 0590676c to 05a06773 has its CatchHandler @ 05906824 */
            sVar2 = FUN_057b9840(lVar8,1,0);
            lVar9 = *unaff_x23;
                    /* try { // try from 0590677c to 05a0677f has its CatchHandler @ 05906838 */
                    /* try { // try from 05906780 to 05a06807 has its CatchHandler @ 059064ec */
            if (*(int *)(lVar9 + 0xe4) == 0) {
              thunk_FUN_031e5338(lVar9);
              lVar9 = *unaff_x23;
            }
            if (*(short *)(*(long *)(lVar9 + 0xb8) + 0x18) == sVar2) {
              FUN_057c1810(lVar8,0,2,0);
              unaff_x19 = FUN_057b27f0();
            }
            else {
              iVar4 = FUN_057c57c4(lVar8,*(undefined8 *)PTR_DAT_070cb780,0,
                                   *(undefined4 *)(lVar8 + 0x10),0);
              uVar3 = FUN_057c46d4(lVar8,0x5c,iVar4 + 1,0);
              unaff_x19 = FUN_057c1810(lVar8,0,uVar3,0);
            }
          }
        }
      }
      goto LAB_05906954;
    }
    uVar5 = FUN_059758c8(0);
    if ((uVar5 & 1) == 0) {
      do {
        iVar4 = FUN_057c46d4();
        if (iVar4 == -1) {
          iVar4 = -1;
          break;
        }
        iVar4 = iVar4 + 1;
        if (iVar4 == *(int *)(unaff_x19 + 0x10)) break;
        sVar2 = FUN_057b9840();
        lVar8 = *unaff_x23;
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_031e5338(lVar8);
          lVar8 = *unaff_x23;
        }
        if (*(short *)(*(long *)(lVar8 + 0xb8) + 10) == sVar2) break;
        sVar2 = FUN_057b9840();
        lVar8 = *unaff_x23;
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_031e5338(lVar8);
          lVar8 = *unaff_x23;
        }
      } while (*(short *)(*(long *)(lVar8 + 0xb8) + 8) != sVar2);
      bVar1 = 0 < iVar4;
    }
    else {
      bVar1 = true;
    }
    lVar8 = FUN_058f0440(0);
    if (lVar8 == 0) goto LAB_05906ab0;
    sVar2 = FUN_057b9840(lVar8,*(int *)(lVar8 + 0x10) + -1,0);
    lVar9 = *unaff_x23;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_031e5338(lVar9);
      lVar9 = *unaff_x23;
    }
    if (*(short *)(*(long *)(lVar9 + 0xb8) + 10) == sVar2) {
      unaff_x19 = FUN_057b27f0(lVar8);
    }
    else {
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_031e5338(lVar9);
      }
      if (*(int *)(*(long *)(PTR_DAT_070c1958 + 0x88) + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      uVar6 = FUN_05897428(*(long *)(*unaff_x23 + 0xb8) + 10,0);
      unaff_x19 = FUN_057bf780(lVar8,uVar6);
    }
    if (bVar1) goto LAB_05906954;
  }
  else {
    uVar3 = FUN_057b9840();
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_031e5338(*unaff_x23);
    }
    uVar5 = FUN_05906bd4(uVar3);
    if ((uVar5 & 1) == 0) goto LAB_059066a8;
    if (*(int *)(unaff_x19 + 0x10) == 2) {
LAB_05906ae4:
      thunk_FUN_031edd38(PTR_DAT_070c3af0);
      uVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed();
      uVar6 = thunk_FUN_031edd38(PTR_DAT_07105160);
      FUN_058a1e9c(uVar7,uVar6,0);
      uVar6 = thunk_FUN_031edd38(PTR_DAT_07105150);
                    /* WARNING: Subroutine does not return */
      FUN_03188b9c(uVar7,uVar6);
    }
                    /* try { // try from 05906618 to 05a0663f has its CatchHandler @ 05906844 */
    FUN_057b9840();
    iVar4 = FUN_057c46d4();
    if (iVar4 < 0) goto LAB_05906ae4;
    sVar2 = FUN_057b9840();
    lVar8 = *unaff_x23;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_031e5338(lVar8);
      lVar8 = *unaff_x23;
    }
    if (*(short *)(*(long *)(lVar8 + 0xb8) + 10) != sVar2) {
      if (*(int *)(lVar8 + 0xe4) == 0) {
                    /* try { // try from 0590667c to 05a066a7 has its CatchHandler @ 05906840 */
        thunk_FUN_031e5338(lVar8);
      }
      unaff_x19 = FUN_057c20c8();
    }
LAB_05906954:
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    unaff_x19 = FUN_05906c64(unaff_x19);
  }
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  uVar5 = FUN_05906bd4(unaff_w20);
  if ((uVar5 & 1) != 0) {
    if (unaff_x19 == 0) {
LAB_05906ab0:
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    sVar2 = FUN_057b9840(unaff_x19,*(int *)(unaff_x19 + 0x10) + -1,0);
    lVar8 = *unaff_x23;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_031e5338(lVar8);
      lVar8 = *unaff_x23;
    }
    if (*(short *)(*(long *)(lVar8 + 0xb8) + 10) != sVar2) {
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_031e5338(lVar8);
      }
      if (*(int *)(*(long *)(PTR_DAT_070c1958 + 0x88) + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      uVar6 = FUN_05897428(*(long *)(*unaff_x23 + 0xb8) + 10,0);
      unaff_x19 = FUN_057b27f0(unaff_x19,uVar6,0);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_070fbbf0 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  uVar5 = FUN_0318f87c(unaff_x19,&stack0x00000008);
  if ((uVar5 & 1) == 0) {
    in_stack_00000008 = unaff_x19;
  }
  return in_stack_00000008;
}


