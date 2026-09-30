/*
FUNCTION_NAME: OVRPlugin$$GetDominantHand
ENTRY_POINT: 05673948
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetDominantHand(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  long unaff_x25;
  ulong unaff_x26;
  byte unaff_w27;
  long *unaff_x28;
  long *unaff_x29;
  long in_stack_00000000;
  long in_stack_00000048;
  
  while( true ) {
    iVar2 = (int)param_1;
    while( true ) {
      if (iVar2 == 0) {
        lVar7 = *(long *)(*unaff_x29 + 0x20);
        if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_02dcfd18();
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
        if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_02dcfd18();
        }
        param_1 = 0;
        if (*(long *)(*(long *)(lVar7 + 0xb8) + 8) == 0) goto LAB_05673a6c;
        param_1 = FUN_05686fc4();
        unaff_w27 = 1;
      }
      unaff_x26 = unaff_x26 + 1;
      if ((long)(int)*(uint *)(unaff_x20 + 0x18) <= (long)unaff_x26) {
        *(byte *)(unaff_x19 + 0x22) = unaff_w27 & 1;
        if ((unaff_w27 & 1) == 0) {
          param_1 = 0;
        }
        else {
          param_1 = 1;
          if (*(int *)(unaff_x19 + 0x1a0) == -1) {
            *(undefined4 *)(unaff_x19 + 0x1a0) = 1;
          }
        }
        if (*(long *)(in_stack_00000000 + 0x28) == in_stack_00000048) {
          return;
        }
        goto LAB_05673a9c;
      }
      if (*(uint *)(unaff_x20 + 0x18) <= unaff_x26) {
        if (*(long *)(in_stack_00000000 + 0x28) == in_stack_00000048) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96868();
        }
        goto LAB_05673a9c;
      }
      lVar7 = *(long *)(unaff_x25 + unaff_x26 * 8);
      if (*(char *)(unaff_x19 + 0x251) != '\0') break;
      uVar1 = *(undefined4 *)(unaff_x19 + 0xc0);
      uVar4 = FUN_05362cb4(*(undefined8 *)System_Collections_Generic_List<MapPackUIObject>_TypeInfo,
                           lVar7,0);
      if (*(int *)(*unaff_x28 + 0xe4) == 0) {
        thunk_FUN_02df485c(*unaff_x28);
      }
      param_1 = FUN_0564aaa8(uVar1,uVar4,&stack0x00000010,&stack0x0000000c,0);
      iVar2 = (int)param_1;
    }
    lVar3 = *(long *)(*unaff_x29 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02dcfd18();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02dcfd18();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
    param_1 = 0;
    if (lVar3 == 0) break;
    lVar3 = FUN_05686734(lVar3,0,1,0);
    param_1 = 0;
    if (lVar3 == 0) break;
    uVar4 = FUN_05371c64(lVar3,0);
    lVar3 = *(long *)(*unaff_x29 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02dcfd18(lVar3);
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02dcfd18();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
    param_1 = 0;
    if (lVar3 == 0) break;
    lVar3 = FUN_05686734(lVar3,1,1,0);
    param_1 = 0;
    if (lVar3 == 0) break;
    uVar5 = FUN_05371c64(lVar3,0);
    lVar3 = *(long *)(*unaff_x29 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02dcfd18(lVar3);
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02dcfd18();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
    param_1 = 0;
    if (lVar3 == 0) break;
    lVar3 = FUN_05686734(lVar3,2,1,0);
    param_1 = 0;
    if ((lVar3 == 0) || (uVar6 = FUN_05371c64(lVar3,0), param_1 = uVar6, lVar7 == 0)) break;
    lVar7 = FUN_0536f9ec(lVar7,uVar4,uVar6,0);
    param_1 = 0;
    if (lVar7 == 0) break;
    uVar4 = FUN_0536f9ec(lVar7,uVar5,uVar6,0);
    uVar4 = FUN_05362cb4(*(undefined8 *)System_Collections_Generic_List<MapPackUIObject>_TypeInfo,
                         uVar4,0);
    uVar1 = *(undefined4 *)(unaff_x19 + 0xc0);
    if (*(int *)(*unaff_x28 + 0xe4) == 0) {
      thunk_FUN_02df485c(*unaff_x28);
    }
    param_1 = OVRInput__GetUp(uVar1,uVar4,&stack0x00000010,&stack0x0000000c,0);
  }
LAB_05673a6c:
  if (*(long *)(in_stack_00000000 + 0x28) == in_stack_00000048) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
LAB_05673a9c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


