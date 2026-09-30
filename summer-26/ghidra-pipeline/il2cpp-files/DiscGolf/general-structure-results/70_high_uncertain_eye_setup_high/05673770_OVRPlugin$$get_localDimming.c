/*
FUNCTION_NAME: OVRPlugin$$get_localDimming
ENTRY_POINT: 05673770
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_localDimming(undefined8 param_1)

{
  undefined4 uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint in_w8;
  long unaff_x19;
  long unaff_x20;
  long lVar10;
  long unaff_x23;
  ulong uVar11;
  long in_stack_00000048;
  
  puVar4 = PTR_DAT_06a0f1a0;
  puVar3 = PTR_DAT_06a0e888;
  uVar11 = 0;
  bVar2 = false;
  while( true ) {
    if (in_w8 <= uVar11) {
      if (*(long *)(unaff_x23 + 0x28) == in_stack_00000048) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      goto LAB_05673a9c;
    }
    lVar10 = *(long *)(unaff_x20 + 0x20 + uVar11 * 8);
    if (*(char *)(unaff_x19 + 0x251) != '\0') break;
    uVar1 = *(undefined4 *)(unaff_x19 + 0xc0);
    uVar7 = FUN_05362cb4(*(undefined8 *)System_Collections_Generic_List<MapPackUIObject>_TypeInfo,
                         lVar10,0);
    lVar10 = *(long *)puVar4;
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_02df485c(lVar10);
    }
    param_1 = FUN_0564aaa8(uVar1,uVar7,&stack0x00000010,&stack0x0000000c,0);
    iVar5 = (int)param_1;
joined_r0x05673948:
    if (iVar5 == 0) {
      lVar10 = *(long *)(*(long *)puVar3 + 0x20);
      if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_02dcfd18();
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
      if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_02dcfd18();
      }
      param_1 = 0;
      if (*(long *)(*(long *)(lVar10 + 0xb8) + 8) == 0) goto LAB_05673a6c;
      param_1 = FUN_05686fc4();
      bVar2 = true;
    }
    in_w8 = *(uint *)(unaff_x20 + 0x18);
    uVar11 = uVar11 + 1;
    if ((long)(int)in_w8 <= (long)uVar11) {
      *(bool *)(unaff_x19 + 0x22) = bVar2;
      if (bVar2) {
        param_1 = 1;
        if (*(int *)(unaff_x19 + 0x1a0) == -1) {
          *(undefined4 *)(unaff_x19 + 0x1a0) = 1;
        }
      }
      else {
        param_1 = 0;
      }
      if (*(long *)(unaff_x23 + 0x28) == in_stack_00000048) {
        return;
      }
LAB_05673a9c:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(param_1);
    }
  }
  lVar6 = *(long *)(*(long *)puVar3 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02dcfd18();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02dcfd18();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
  param_1 = 0;
  if (lVar6 != 0) {
    lVar6 = FUN_05686734(lVar6,0,1,0);
    param_1 = 0;
    if (lVar6 != 0) {
      uVar7 = FUN_05371c64(lVar6,0);
      lVar6 = *(long *)(*(long *)puVar3 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_02dcfd18(lVar6);
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 056735c0 with catch @ 05673838
                        */
        lVar6 = FUN_02dcfd18();
      }
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 056735e8 with catch @ 0567383c
                        */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 056735c4 with catch @ 05673840
                        */
      lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
      param_1 = 0;
      if (lVar6 != 0) {
        lVar6 = FUN_05686734(lVar6,1,1,0);
                    /* try { // try from 05673858 to 0577386f has its CatchHandler @ 05673918 */
        param_1 = 0;
        if (lVar6 != 0) {
          uVar8 = FUN_05371c64(lVar6,0);
          lVar6 = *(long *)(*(long *)puVar3 + 0x20);
          if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_02dcfd18(lVar6);
          }
          lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
          if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_02dcfd18();
          }
          lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
          param_1 = 0;
          if (lVar6 != 0) {
            lVar6 = FUN_05686734(lVar6,2,1,0);
            param_1 = 0;
            if ((lVar6 != 0) && (uVar9 = FUN_05371c64(lVar6,0), param_1 = uVar9, lVar10 != 0)) {
              lVar10 = FUN_0536f9ec(lVar10,uVar7,uVar9,0);
              param_1 = 0;
              if (lVar10 != 0) {
                uVar7 = FUN_0536f9ec(lVar10,uVar8,uVar9,0);
                uVar7 = FUN_05362cb4(*(undefined8 *)
                                      System_Collections_Generic_List<MapPackUIObject>_TypeInfo,
                                     uVar7,0);
                lVar10 = *(long *)puVar4;
                uVar1 = *(undefined4 *)(unaff_x19 + 0xc0);
                if (*(int *)(lVar10 + 0xe4) == 0) {
                  thunk_FUN_02df485c(lVar10);
                }
                param_1 = OVRInput__GetUp(uVar1,uVar7,&stack0x00000010,&stack0x0000000c,0);
                iVar5 = (int)param_1;
                goto joined_r0x05673948;
              }
            }
          }
        }
      }
    }
  }
LAB_05673a6c:
  if (*(long *)(unaff_x23 + 0x28) == in_stack_00000048) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  goto LAB_05673a9c;
}


