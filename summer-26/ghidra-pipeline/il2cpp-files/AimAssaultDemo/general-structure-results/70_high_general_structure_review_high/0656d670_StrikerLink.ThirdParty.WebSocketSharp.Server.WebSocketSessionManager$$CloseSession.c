/*
FUNCTION_NAME: StrikerLink.ThirdParty.WebSocketSharp.Server.WebSocketSessionManager$$CloseSession
ENTRY_POINT: 0656d670
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void StrikerLink_ThirdParty_WebSocketSharp_Server_WebSocketSessionManager__CloseSession
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long unaff_x19;
  undefined8 uVar7;
  int iVar8;
  long *unaff_x22;
  long *unaff_x23;
  int unaff_w24;
  undefined8 *unaff_x25;
  long *unaff_x26;
  undefined1 unaff_w27;
  undefined8 *unaff_x28;
  
  do {
    FUN_049d05ec(param_1,param_2,param_3);
    while( true ) {
      lVar3 = *unaff_x23;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar3 = *unaff_x23;
      }
      plVar5 = *(long **)(lVar3 + 0xb8);
      if (*plVar5 == 0) goto LAB_0656d818;
      if (0 < *(int *)(*plVar5 + 0x18)) break;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar3 = *unaff_x23;
        plVar5 = *(long **)(lVar3 + 0xb8);
      }
      if (plVar5[1] == 0) goto LAB_0656d818;
      if (unaff_w24 == *(int *)(plVar5[1] + 0x18)) {
LAB_0656d750:
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_03798b70();
          lVar3 = *unaff_x23;
        }
        plVar5 = *(long **)(lVar3 + 0xb8);
        lVar3 = *plVar5;
        if (lVar3 != 0) {
          iVar8 = *(int *)(lVar3 + 0x18);
          *(undefined4 *)(lVar3 + 0x18) = 0;
          *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
          if (0 < iVar8) {
            FUN_062658d0(*(undefined8 *)(lVar3 + 0x10),0,iVar8,0);
            plVar5 = *(long **)(*unaff_x23 + 0xb8);
          }
          lVar3 = plVar5[1];
          if (lVar3 != 0) {
            iVar8 = *(int *)(lVar3 + 0x18);
            *(undefined4 *)(lVar3 + 0x18) = 0;
            *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
            if (0 < iVar8) {
              FUN_062658d0(*(undefined8 *)(lVar3 + 0x10),0,iVar8,0);
            }
            uVar7 = *(undefined8 *)(unaff_x19 + 0x70);
            if (*(int *)(*unaff_x22 + 0xe4) == 0) {
              thunk_FUN_03798b70();
            }
            FUN_0657aa2c(uVar7,0);
            return;
          }
        }
        goto LAB_0656d818;
      }
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      FUN_0656ce5c();
      lVar4 = *(long *)(unaff_x19 + 0x70);
      if (lVar4 == 0) goto LAB_0656d818;
      iVar8 = *(int *)(lVar4 + 0x18) + -1;
      if (-1 < iVar8) {
        do {
          if ((lVar4 == 0) || (lVar3 = FUN_049cec24(lVar4,iVar8,*unaff_x25), lVar3 == 0))
          goto LAB_0656d818;
          if (*(long *)(lVar3 + 0xf0) != unaff_x19) {
            if (*(long *)(unaff_x19 + 0x70) == 0) goto LAB_0656d818;
            FUN_049d05ec(*(long *)(unaff_x19 + 0x70),iVar8,*unaff_x28);
          }
          lVar4 = *(long *)(unaff_x19 + 0x70);
          iVar8 = iVar8 + -1;
        } while (-1 < iVar8);
        if (lVar4 == 0) goto LAB_0656d818;
      }
      lVar3 = *unaff_x23;
      if (*(int *)(lVar4 + 0x18) < 1) goto LAB_0656d750;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar3 = *unaff_x23;
      }
      lVar3 = **(long **)(lVar3 + 0xb8);
      if (lVar3 == 0) goto LAB_0656d818;
      iVar8 = *(int *)(lVar3 + 0x18);
      *(undefined4 *)(lVar3 + 0x18) = 0;
      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      if (0 < iVar8) {
        FUN_062658d0(*(undefined8 *)(lVar3 + 0x10),0,iVar8,0);
        lVar3 = **(long **)(*unaff_x23 + 0xb8);
      }
      if ((*(long *)(unaff_x19 + 0x70) == 0) ||
         (uVar7 = FUN_049cec24(*(long *)(unaff_x19 + 0x70),0,*unaff_x25), lVar3 == 0))
      goto LAB_0656d818;
      lVar4 = *(long *)(lVar3 + 0x10);
      lVar6 = *unaff_x26;
      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      if (lVar4 == 0) goto LAB_0656d818;
      uVar2 = *(uint *)(lVar3 + 0x18);
      if (uVar2 < *(uint *)(lVar4 + 0x18)) {
        *(uint *)(lVar3 + 0x18) = uVar2 + 1;
        *(undefined8 *)(lVar4 + (long)(int)uVar2 * 8 + 0x20) = uVar7;
        thunk_FUN_037aeb94();
      }
      else {
        FUN_049ceef4(lVar3,uVar7,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
      }
      if ((*(long *)(unaff_x19 + 0x70) == 0) ||
         (lVar3 = FUN_049cec24(*(long *)(unaff_x19 + 0x70),0,*unaff_x25), lVar3 == 0))
      goto LAB_0656d818;
      *(undefined1 *)(lVar3 + 0xf8) = unaff_w27;
      lVar3 = *(long *)(*(long *)(*unaff_x23 + 0xb8) + 8);
      if (lVar3 == 0) goto LAB_0656d818;
      iVar8 = *(int *)(lVar3 + 0x18);
      *(undefined4 *)(lVar3 + 0x18) = 0;
      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      if (0 < iVar8) {
        FUN_062658d0(*(undefined8 *)(lVar3 + 0x10),0,iVar8,0);
        lVar3 = *(long *)(*(long *)(*unaff_x23 + 0xb8) + 8);
      }
      if ((*(long *)(unaff_x19 + 0x70) == 0) ||
         (uVar7 = FUN_049cec24(*(long *)(unaff_x19 + 0x70),0,*unaff_x25), lVar3 == 0))
      goto LAB_0656d818;
      lVar4 = *(long *)(lVar3 + 0x10);
      lVar6 = *unaff_x26;
      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      if (lVar4 == 0) goto LAB_0656d818;
      uVar2 = *(uint *)(lVar3 + 0x18);
      if (uVar2 < *(uint *)(lVar4 + 0x18)) {
        *(uint *)(lVar3 + 0x18) = uVar2 + 1;
        *(undefined8 *)(lVar4 + (long)(int)uVar2 * 8 + 0x20) = uVar7;
        thunk_FUN_037aeb94();
      }
      else {
        FUN_049ceef4(lVar3,uVar7,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
      }
    }
    iVar8 = 0;
    while( true ) {
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar3 = *unaff_x23;
      }
      if (((**(long **)(lVar3 + 0xb8) == 0) ||
          (lVar3 = FUN_049cec24(**(long **)(lVar3 + 0xb8),0,*unaff_x25), lVar3 == 0)) ||
         (*(long *)(lVar3 + 0xe8) == 0)) goto LAB_0656d818;
      lVar4 = *unaff_x23;
      iVar1 = *(int *)(*(long *)(lVar3 + 0xe8) + 0x18);
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar4 = *unaff_x23;
      }
      param_1 = **(long **)(lVar4 + 0xb8);
      if (param_1 == 0) goto LAB_0656d818;
      if (iVar1 <= iVar8) break;
      lVar3 = FUN_049cec24(param_1,0,*unaff_x25);
      if (((lVar3 == 0) || (*(long *)(lVar3 + 0xe8) == 0)) ||
         (lVar3 = FUN_049cec24(*(long *)(lVar3 + 0xe8),iVar8,*unaff_x25), lVar3 == 0))
      goto LAB_0656d818;
      if (*(char *)(lVar3 + 0xf8) == '\0') {
        lVar3 = *unaff_x23;
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_03798b70();
          lVar3 = *unaff_x23;
        }
        if (((**(long **)(lVar3 + 0xb8) == 0) ||
            (lVar3 = FUN_049cec24(**(long **)(lVar3 + 0xb8),0,*unaff_x25), lVar3 == 0)) ||
           ((*(long *)(lVar3 + 0xe8) == 0 ||
            (lVar3 = FUN_049cec24(*(long *)(lVar3 + 0xe8),iVar8,*unaff_x25), lVar3 == 0)))) {
LAB_0656d818:
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        *(undefined1 *)(lVar3 + 0xf8) = unaff_w27;
        lVar3 = **(long **)(*unaff_x23 + 0xb8);
        if (((lVar3 == 0) || (lVar4 = FUN_049cec24(lVar3,0,*unaff_x25), lVar4 == 0)) ||
           (*(long *)(lVar4 + 0xe8) == 0)) goto LAB_0656d818;
        uVar7 = FUN_049cec24(*(long *)(lVar4 + 0xe8),iVar8,*unaff_x25);
        lVar4 = *(long *)(lVar3 + 0x10);
        lVar6 = *unaff_x26;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar4 == 0) goto LAB_0656d818;
        uVar2 = *(uint *)(lVar3 + 0x18);
        if (uVar2 < *(uint *)(lVar4 + 0x18)) {
          *(uint *)(lVar3 + 0x18) = uVar2 + 1;
          *(undefined8 *)(lVar4 + (long)(int)uVar2 * 8 + 0x20) = uVar7;
          thunk_FUN_037aeb94();
        }
        else {
          FUN_049ceef4(lVar3,uVar7,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70)
                      );
        }
        lVar3 = **(long **)(*unaff_x23 + 0xb8);
        if (lVar3 == 0) goto LAB_0656d818;
        lVar4 = (*(long **)(*unaff_x23 + 0xb8))[1];
        lVar3 = FUN_049cec24(lVar3,0,*unaff_x25);
        if (((lVar3 == 0) || (*(long *)(lVar3 + 0xe8) == 0)) ||
           (uVar7 = FUN_049cec24(*(long *)(lVar3 + 0xe8),iVar8,*unaff_x25), lVar4 == 0))
        goto LAB_0656d818;
        lVar3 = *(long *)(lVar4 + 0x10);
        lVar6 = *unaff_x26;
        *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
        if (lVar3 == 0) goto LAB_0656d818;
        uVar2 = *(uint *)(lVar4 + 0x18);
        if (uVar2 < *(uint *)(lVar3 + 0x18)) {
          *(uint *)(lVar4 + 0x18) = uVar2 + 1;
          *(undefined8 *)(lVar3 + (long)(int)uVar2 * 8 + 0x20) = uVar7;
          thunk_FUN_037aeb94();
        }
        else {
          FUN_049ceef4(lVar4,uVar7,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70)
                      );
        }
      }
      lVar3 = *unaff_x23;
      iVar8 = iVar8 + 1;
    }
    param_3 = *unaff_x28;
    param_2 = 0;
  } while( true );
}


