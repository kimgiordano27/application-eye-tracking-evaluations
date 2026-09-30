/*
FUNCTION_NAME: StrikerLink.ThirdParty.WebSocketSharp.Server.WebSocketSessionManager$$CloseSession
ENTRY_POINT: 0656d588
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
               (long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long in_x9;
  long lVar5;
  long unaff_x19;
  int unaff_w20;
  int iVar6;
  long unaff_x21;
  long lVar7;
  long *unaff_x22;
  long *unaff_x23;
  int unaff_w24;
  undefined8 *unaff_x25;
  long *unaff_x26;
  undefined1 unaff_w27;
  undefined8 *unaff_x28;
  
  while( true ) {
    uVar1 = *(uint *)(unaff_x21 + 0x18);
    if (uVar1 < *(uint *)(param_1 + 0x18)) {
      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
      *(undefined8 *)(param_1 + (long)(int)uVar1 * 8 + 0x20) = param_2;
      thunk_FUN_037aeb94();
    }
    else {
      FUN_049ceef4(unaff_x21,param_2,
                   *(undefined8 *)(*(long *)(*(long *)(in_x9 + 0x20) + 0xc0) + 0x70));
    }
    lVar2 = **(long **)(*unaff_x23 + 0xb8);
    if (lVar2 == 0) break;
    lVar7 = (*(long **)(*unaff_x23 + 0xb8))[1];
    lVar2 = FUN_049cec24(lVar2,0,*unaff_x25);
    if (((lVar2 == 0) || (*(long *)(lVar2 + 0xe8) == 0)) ||
       (uVar3 = FUN_049cec24(*(long *)(lVar2 + 0xe8),unaff_w20,*unaff_x25), lVar7 == 0)) break;
    lVar2 = *(long *)(lVar7 + 0x10);
    lVar5 = *unaff_x26;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (lVar2 == 0) break;
    uVar1 = *(uint *)(lVar7 + 0x18);
    if (uVar1 < *(uint *)(lVar2 + 0x18)) {
      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar2 + (long)(int)uVar1 * 8 + 0x20) = uVar3;
      thunk_FUN_037aeb94();
    }
    else {
      FUN_049ceef4(lVar7,uVar3,*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
    }
    do {
      lVar2 = *unaff_x23;
      unaff_w20 = unaff_w20 + 1;
      while( true ) {
        if (*(int *)(lVar2 + 0xe4) == 0) {
          thunk_FUN_03798b70();
          lVar2 = *unaff_x23;
        }
        if (((**(long **)(lVar2 + 0xb8) == 0) ||
            (lVar2 = FUN_049cec24(**(long **)(lVar2 + 0xb8),0,*unaff_x25), lVar2 == 0)) ||
           (*(long *)(lVar2 + 0xe8) == 0)) goto LAB_0656d818;
        lVar7 = *unaff_x23;
        iVar6 = *(int *)(*(long *)(lVar2 + 0xe8) + 0x18);
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_03798b70();
          lVar7 = *unaff_x23;
        }
        lVar2 = **(long **)(lVar7 + 0xb8);
        if (lVar2 == 0) goto LAB_0656d818;
        if (unaff_w20 < iVar6) break;
        FUN_049d05ec(lVar2,0,*unaff_x28);
        while( true ) {
          lVar2 = *unaff_x23;
          if (*(int *)(lVar2 + 0xe4) == 0) {
            thunk_FUN_03798b70();
            lVar2 = *unaff_x23;
          }
          plVar4 = *(long **)(lVar2 + 0xb8);
          if (*plVar4 == 0) goto LAB_0656d818;
          if (0 < *(int *)(*plVar4 + 0x18)) break;
          if (*(int *)(lVar2 + 0xe4) == 0) {
            thunk_FUN_03798b70();
            lVar2 = *unaff_x23;
            plVar4 = *(long **)(lVar2 + 0xb8);
          }
          if (plVar4[1] == 0) goto LAB_0656d818;
          if (unaff_w24 == *(int *)(plVar4[1] + 0x18)) {
LAB_0656d750:
            if (*(int *)(lVar2 + 0xe4) == 0) {
              thunk_FUN_03798b70();
              lVar2 = *unaff_x23;
            }
            plVar4 = *(long **)(lVar2 + 0xb8);
            lVar2 = *plVar4;
            if (lVar2 != 0) {
              iVar6 = *(int *)(lVar2 + 0x18);
              *(undefined4 *)(lVar2 + 0x18) = 0;
              *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
              if (0 < iVar6) {
                FUN_062658d0(*(undefined8 *)(lVar2 + 0x10),0,iVar6,0);
                plVar4 = *(long **)(*unaff_x23 + 0xb8);
              }
              lVar2 = plVar4[1];
              if (lVar2 != 0) {
                iVar6 = *(int *)(lVar2 + 0x18);
                *(undefined4 *)(lVar2 + 0x18) = 0;
                *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
                if (0 < iVar6) {
                  FUN_062658d0(*(undefined8 *)(lVar2 + 0x10),0,iVar6,0);
                }
                uVar3 = *(undefined8 *)(unaff_x19 + 0x70);
                if (*(int *)(*unaff_x22 + 0xe4) == 0) {
                  thunk_FUN_03798b70();
                }
                FUN_0657aa2c(uVar3,0);
                return;
              }
            }
            goto LAB_0656d818;
          }
          if (*(int *)(lVar2 + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          FUN_0656ce5c();
          lVar7 = *(long *)(unaff_x19 + 0x70);
          if (lVar7 == 0) goto LAB_0656d818;
          iVar6 = *(int *)(lVar7 + 0x18) + -1;
          if (-1 < iVar6) {
            do {
              if ((lVar7 == 0) || (lVar2 = FUN_049cec24(lVar7,iVar6,*unaff_x25), lVar2 == 0))
              goto LAB_0656d818;
              if (*(long *)(lVar2 + 0xf0) != unaff_x19) {
                if (*(long *)(unaff_x19 + 0x70) == 0) goto LAB_0656d818;
                FUN_049d05ec(*(long *)(unaff_x19 + 0x70),iVar6,*unaff_x28);
              }
              lVar7 = *(long *)(unaff_x19 + 0x70);
              iVar6 = iVar6 + -1;
            } while (-1 < iVar6);
            if (lVar7 == 0) goto LAB_0656d818;
          }
          lVar2 = *unaff_x23;
          if (*(int *)(lVar7 + 0x18) < 1) goto LAB_0656d750;
          if (*(int *)(lVar2 + 0xe4) == 0) {
            thunk_FUN_03798b70();
            lVar2 = *unaff_x23;
          }
          lVar2 = **(long **)(lVar2 + 0xb8);
          if (lVar2 == 0) goto LAB_0656d818;
          iVar6 = *(int *)(lVar2 + 0x18);
          *(undefined4 *)(lVar2 + 0x18) = 0;
          *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
          if (0 < iVar6) {
            FUN_062658d0(*(undefined8 *)(lVar2 + 0x10),0,iVar6,0);
            lVar2 = **(long **)(*unaff_x23 + 0xb8);
          }
          if ((*(long *)(unaff_x19 + 0x70) == 0) ||
             (uVar3 = FUN_049cec24(*(long *)(unaff_x19 + 0x70),0,*unaff_x25), lVar2 == 0))
          goto LAB_0656d818;
          lVar7 = *(long *)(lVar2 + 0x10);
          lVar5 = *unaff_x26;
          *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
          if (lVar7 == 0) goto LAB_0656d818;
          uVar1 = *(uint *)(lVar2 + 0x18);
          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
            *(uint *)(lVar2 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar3;
            thunk_FUN_037aeb94();
          }
          else {
            FUN_049ceef4(lVar2,uVar3,
                         *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
          }
          if ((*(long *)(unaff_x19 + 0x70) == 0) ||
             (lVar2 = FUN_049cec24(*(long *)(unaff_x19 + 0x70),0,*unaff_x25), lVar2 == 0))
          goto LAB_0656d818;
          *(undefined1 *)(lVar2 + 0xf8) = unaff_w27;
          lVar2 = *(long *)(*(long *)(*unaff_x23 + 0xb8) + 8);
          if (lVar2 == 0) goto LAB_0656d818;
          iVar6 = *(int *)(lVar2 + 0x18);
          *(undefined4 *)(lVar2 + 0x18) = 0;
          *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
          if (0 < iVar6) {
            FUN_062658d0(*(undefined8 *)(lVar2 + 0x10),0,iVar6,0);
            lVar2 = *(long *)(*(long *)(*unaff_x23 + 0xb8) + 8);
          }
          if ((*(long *)(unaff_x19 + 0x70) == 0) ||
             (uVar3 = FUN_049cec24(*(long *)(unaff_x19 + 0x70),0,*unaff_x25), lVar2 == 0))
          goto LAB_0656d818;
          lVar7 = *(long *)(lVar2 + 0x10);
          lVar5 = *unaff_x26;
          *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
          if (lVar7 == 0) goto LAB_0656d818;
          uVar1 = *(uint *)(lVar2 + 0x18);
          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
            *(uint *)(lVar2 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar3;
            thunk_FUN_037aeb94();
          }
          else {
            FUN_049ceef4(lVar2,uVar3,
                         *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
          }
        }
        unaff_w20 = 0;
      }
      lVar2 = FUN_049cec24(lVar2,0,*unaff_x25);
      if (((lVar2 == 0) || (*(long *)(lVar2 + 0xe8) == 0)) ||
         (lVar2 = FUN_049cec24(*(long *)(lVar2 + 0xe8),unaff_w20,*unaff_x25), lVar2 == 0))
      goto LAB_0656d818;
    } while (*(char *)(lVar2 + 0xf8) != '\0');
    lVar2 = *unaff_x23;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar2 = *unaff_x23;
    }
    if (((**(long **)(lVar2 + 0xb8) == 0) ||
        (lVar2 = FUN_049cec24(**(long **)(lVar2 + 0xb8),0,*unaff_x25), lVar2 == 0)) ||
       ((*(long *)(lVar2 + 0xe8) == 0 ||
        (lVar2 = FUN_049cec24(*(long *)(lVar2 + 0xe8),unaff_w20,*unaff_x25), lVar2 == 0)))) break;
    *(undefined1 *)(lVar2 + 0xf8) = unaff_w27;
    unaff_x21 = **(long **)(*unaff_x23 + 0xb8);
    if (((unaff_x21 == 0) || (lVar2 = FUN_049cec24(unaff_x21,0,*unaff_x25), lVar2 == 0)) ||
       (*(long *)(lVar2 + 0xe8) == 0)) break;
    param_2 = FUN_049cec24(*(long *)(lVar2 + 0xe8),unaff_w20,*unaff_x25);
    param_1 = *(long *)(unaff_x21 + 0x10);
    in_x9 = *unaff_x26;
    *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
    if (param_1 == 0) break;
  }
LAB_0656d818:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


