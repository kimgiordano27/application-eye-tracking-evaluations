/*
FUNCTION_NAME: WebSocketSharp.Server.WebSocketSessionManager$$CloseSession
ENTRY_POINT: 0a4502dc
PROGRAM: Hyper-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


undefined8 WebSocketSharp_Server_WebSocketSessionManager__CloseSession(long *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  long unaff_x20;
  undefined8 uVar9;
  long unaff_x21;
  
  if ((*(byte *)(unaff_x21 + 0x926) & 1) == 0) {
    FUN_04947ee4(PTR_DAT_0acd9078);
    FUN_04947ee4(PTR_DAT_0ac09810);
    *(undefined1 *)(unaff_x21 + 0x926) = 1;
  }
  if (unaff_x20 == 0) goto LAB_0a4506d0;
  uVar3 = FUN_0a1c46f0();
  iVar4 = FUN_0a1850fc(0);
  uVar8 = 8;
  if (iVar4 != 1) {
    uVar8 = 2;
  }
  uVar2 = uVar3 >> 2 & 1;
  uVar1 = uVar8 & uVar3;
  if (uVar1 == 0) {
    uVar2 = 1;
  }
  uVar5 = FUN_0a1c4d3c();
  if ((int)uVar5 < 0x62) {
    if ((int)uVar5 < 0xe) {
      if (uVar5 == 8) {
        FUN_0a4506d4(param_1);
        return 0;
      }
      if (uVar5 == 0xd) {
LAB_0a450434:
        if ((int)param_1[0x25] != 2) {
          return 1;
        }
      }
    }
    else {
      if (uVar5 == 0x1b) {
        *(undefined1 *)(param_1 + 0x40) = 1;
        return 1;
      }
      if ((uVar5 == 0x61) && (uVar2 == 0 && (uVar3 & 1) == 0)) {
        FUN_0a44d804(param_1);
        return 0;
      }
    }
  }
  else if (uVar5 < 0x77) {
    if (uVar5 == 99) {
      if (uVar2 == 0 && (uVar3 & 1) == 0) {
LAB_0a4505e4:
        if (*(int *)((long)param_1 + 0x11c) == 2) {
          if (*(int *)(*(long *)PTR_DAT_0acd9078 + 0xe4) == 0) {
            thunk_FUN_049a583c();
          }
          uVar9 = *(undefined8 *)PTR_DAT_0ac09810;
        }
        else {
          uVar9 = FUN_0a4508a0(param_1);
          if (*(int *)(*(long *)PTR_DAT_0acd9078 + 0xe4) == 0) {
            thunk_FUN_049a583c(*(long *)PTR_DAT_0acd9078);
          }
        }
        FUN_0a44d968(uVar9);
        return 0;
      }
    }
    else if ((uVar5 == 0x76) && (uVar2 == 0 && (uVar3 & 1) == 0)) {
LAB_0a4503ec:
      if (*(int *)(*(long *)PTR_DAT_0acd9078 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      uVar9 = FUN_0a44d918();
      (**(code **)(*param_1 + 0x558))(param_1,uVar9,*(undefined8 *)(*param_1 + 0x560));
      goto LAB_0a4505d8;
    }
  }
  else if ((int)uVar5 < 0x113) {
    if ((int)uVar5 < 0x10f) {
      if (uVar5 == 0x78) {
        if (uVar2 == 0 && (uVar3 & 1) == 0) {
          if (*(int *)((long)param_1 + 0x11c) == 2) {
            if (*(int *)(*(long *)PTR_DAT_0acd9078 + 0xe4) == 0) {
              thunk_FUN_049a583c();
            }
            uVar9 = *(undefined8 *)PTR_DAT_0ac09810;
          }
          else {
            uVar9 = FUN_0a4508a0(param_1);
            if (*(int *)(*(long *)PTR_DAT_0acd9078 + 0xe4) == 0) {
              thunk_FUN_049a583c(*(long *)PTR_DAT_0acd9078);
            }
          }
          FUN_0a44d968(uVar9);
          FUN_0a450944(param_1);
          FUN_0a450b0c(param_1);
          FUN_0a44bb14(param_1);
          goto LAB_0a4505d8;
        }
      }
      else if (uVar5 == 0x7f) {
        FUN_0a4507f0(param_1);
        return 0;
      }
    }
    else {
                    /* try { // try from 0a450388 to 0a55056b has its CatchHandler @ 0a450388
                       catch() { ... } // from try @ 0a450388 with catch @ 0a450388
                       catch() { ... } // from try @ 0a4505b0 with catch @ 0a450388
                       catch() { ... } // from try @ 0a450744 with catch @ 0a450388
                       catch() { ... } // from try @ 0a450774 with catch @ 0a450388
                       catch() { ... } // from try @ 0a4507a0 with catch @ 0a450388 */
      if (uVar5 == 0x10f) goto LAB_0a450434;
      if (uVar5 == 0x111) {
        FUN_0a4519c8(param_1,uVar3 & 1,1);
        return 0;
      }
      if (uVar5 == 0x112) {
        FUN_0a451868(param_1,uVar3 & 1,1);
        return 0;
      }
    }
  }
  else if ((int)uVar5 < 0x115) {
    if (uVar5 == 0x113) {
      FUN_0a450c9c(param_1,uVar3 & 1,uVar1 != 0);
      return 0;
    }
    if (uVar5 == 0x114) {
      FUN_0a450b54(param_1,uVar3 & 1,uVar1 != 0);
      return 0;
    }
  }
  else if (uVar5 == 0x115) {
    if (uVar2 == 0 && (uVar3 & 1) == 0) goto LAB_0a4505e4;
    if ((uVar3 & 1) != 0 && (uVar3 & (uVar8 | 4)) == 0) goto LAB_0a4503ec;
  }
  else {
    if (uVar5 == 0x116) {
      FUN_0a44d89c(param_1,uVar3 & 1);
      return 0;
    }
    if (uVar5 == 0x117) {
      FUN_0a44d83c(param_1,uVar3 & 1);
      return 0;
    }
  }
  uVar3 = FUN_0a1c4aec();
  uVar8 = uVar3 & 0xffff;
  if ((int)param_1[0x25] - 1U < 2) {
    if ((uVar8 == 0xd) || (uVar8 == 3)) {
LAB_0a450590:
      uVar3 = 10;
    }
  }
  else {
    if (uVar8 - 9 < 2) {
      return 0;
    }
    if (uVar8 == 3) goto LAB_0a450590;
    if (uVar8 == 0xd) {
      return 0;
    }
  }
  uVar6 = FUN_0a450df4(param_1,uVar3);
  if ((uVar6 & 1) != 0) {
    (**(code **)(*param_1 + 0x568))(param_1,uVar3,*(undefined8 *)(*param_1 + 0x570));
  }
  if ((uVar3 & 0xffff) != 0) {
    return 0;
  }
  lVar7 = FUN_0a44b0d8();
  if (lVar7 == 0) {
LAB_0a4506d0:
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  if (*(int *)(lVar7 + 0x10) < 1) {
    return 0;
  }
LAB_0a4505d8:
  FUN_0a44bb94(param_1);
  return 0;
}


