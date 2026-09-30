/*
FUNCTION_NAME: OVRPlugin$$GetMesh
ENTRY_POINT: 03228bc8
PROGRAM: vrfs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetMesh(void)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  ushort *puVar5;
  uint in_w8;
  int *in_x10;
  uint uVar6;
  int unaff_w20;
  int iVar7;
  long *unaff_x21;
  uint unaff_w23;
  ushort *unaff_x24;
  long unaff_x25;
  ushort *unaff_x26;
  ushort *puVar8;
  int unaff_w27;
  uint uVar9;
  ulong *in_stack_00000008;
  ulong in_stack_00000010;
  int *in_stack_00000028;
  
  do {
    in_x10[1] = in_x10[1] + -1;
    puVar8 = unaff_x26;
    uVar6 = in_w8;
LAB_03228d1c:
    do {
      while( true ) {
        unaff_x26 = puVar8 + 1;
        uVar9 = 0;
        if (unaff_x26 < unaff_x24) {
          uVar9 = (uint)*unaff_x26;
        }
        if (*(int *)(*unaff_x21 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        if (uVar9 - 0x30 < 10) break;
        if (((unaff_w23 >> 5 & 1) == 0) || ((uVar6 >> 4 & 1) != 0)) {
LAB_03228cac:
          if ((((uVar6 >> 4 & 1) == 0) && ((unaff_w23 >> 6 & 1) != 0)) && ((uVar6 >> 2 & 1) != 0)) {
            if (*(int *)(*unaff_x21 + 0xe0) == 0) {
              thunk_FUN_016466fc();
            }
            lVar3 = FUN_03229094(unaff_x26);
            if (lVar3 != 0) goto LAB_03228d18;
            if (((in_stack_00000010._4_4_ ^ 1) & 1) == 0 && (uVar6 & 0x20) == 0) {
              if (*(int *)(*unaff_x21 + 0xe0) == 0) {
                thunk_FUN_016466fc();
              }
              lVar3 = FUN_03229094(unaff_x26);
              if (lVar3 != 0) goto LAB_03228d18;
            }
          }
          *in_stack_00000028 = unaff_w20;
          lVar3 = FUN_031c8358(in_stack_00000028,0);
          *(undefined2 *)(lVar3 + (long)unaff_w20 * 2) = 0;
          if ((uVar6 >> 2 & 1) == 0) goto LAB_03228eb4;
          if (((uVar9 | 0x20) == 0x65) && ((unaff_w23 >> 7 & 1) != 0)) {
            puVar8 = puVar8 + 2;
            if (puVar8 < unaff_x24) {
              uVar9 = (uint)*puVar8;
            }
            else {
              uVar9 = 0;
            }
            if (*(int *)(*unaff_x21 + 0xe0) == 0) {
              thunk_FUN_016466fc();
            }
            puVar5 = (ushort *)FUN_03229094(puVar8);
            if (puVar5 == (ushort *)0x0) {
              if (*(int *)(*unaff_x21 + 0xe0) == 0) {
                thunk_FUN_016466fc();
              }
              puVar5 = (ushort *)FUN_03229094(puVar8);
              if (puVar5 == (ushort *)0x0) goto LAB_03228f84;
              if (puVar5 < unaff_x24) {
                uVar9 = (uint)*puVar5;
              }
              else {
                uVar9 = 0;
              }
              bVar2 = true;
            }
            else if (puVar5 < unaff_x24) {
              uVar9 = (uint)*puVar5;
              puVar8 = puVar5;
LAB_03228f84:
              bVar2 = false;
              puVar5 = puVar8;
            }
            else {
              bVar2 = false;
              uVar9 = 0;
            }
            if (*(int *)(*unaff_x21 + 0xe0) == 0) {
              thunk_FUN_016466fc();
            }
            if (uVar9 - 0x30 < 10) {
              iVar7 = 0;
              unaff_x26 = puVar5;
              do {
                unaff_x26 = unaff_x26 + 1;
                iVar7 = iVar7 * 10 + uVar9 + -0x30;
                if (unaff_x26 < unaff_x24) {
                  uVar9 = (uint)*unaff_x26;
                }
                else {
                  uVar9 = 0;
                }
                if (1000 < iVar7) {
                  while( true ) {
                    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
                      thunk_FUN_016466fc();
                    }
                    if (9 < uVar9 - 0x30) break;
                    unaff_x26 = unaff_x26 + 1;
                    uVar9 = 0;
                    if (unaff_x26 < unaff_x24) {
                      uVar9 = (uint)*unaff_x26;
                    }
                  }
                  iVar7 = 9999;
                }
                if (*(int *)(*unaff_x21 + 0xe0) == 0) {
                  thunk_FUN_016466fc();
                }
              } while (uVar9 - 0x30 < 10);
              iVar1 = -iVar7;
              if (!bVar2) {
                iVar1 = iVar7;
              }
              in_stack_00000028[1] = in_stack_00000028[1] + iVar1;
            }
            else if (unaff_x26 < unaff_x24) {
              uVar9 = (uint)*unaff_x26;
            }
            else {
              uVar9 = 0;
            }
          }
          goto LAB_03228d6c;
        }
                    /* try { // try from 03228bec to 03328c47 has its CatchHandler @ 03228ad8 */
        if (*(int *)(*unaff_x21 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        lVar3 = FUN_03229094(unaff_x26);
        if (lVar3 == 0) {
          if (((in_stack_00000010._4_4_ ^ 1) & 1) == 0 && (uVar6 & 0x20) == 0) {
            if (*(int *)(*unaff_x21 + 0xe0) == 0) {
              thunk_FUN_016466fc();
            }
            lVar3 = FUN_03229094(unaff_x26);
            if (lVar3 != 0) goto LAB_03228c08;
          }
          goto LAB_03228cac;
        }
LAB_03228c08:
        uVar6 = uVar6 | 0x10;
LAB_03228d18:
        puVar8 = (ushort *)(lVar3 - 2);
      }
      puVar8 = unaff_x26;
      if ((uVar9 != 0x30) || ((uVar6 >> 3 & 1) != 0)) {
        iVar7 = unaff_w27;
        if (unaff_w27 < 0x32) {
          lVar3 = FUN_031c8358(in_stack_00000028,0);
          *(short *)(lVar3 + (long)unaff_w27 * 2) = (short)uVar9;
                    /* try { // try from 03228c48 to 03328c57 has its CatchHandler @ 03228c58 */
          iVar7 = unaff_w27 + 1;
          if (uVar9 != 0x30 || (in_stack_00000010 & 1) != 0) {
            unaff_w20 = unaff_w27 + 1;
          }
        }
        unaff_w27 = iVar7;
        if ((uVar6 >> 4 & 1) == 0) {
                    /* catch() { ... } // from try @ 03228bd4 with catch @ 03228c58
                       catch() { ... } // from try @ 03228c48 with catch @ 03228c58 */
                    /* try { // try from 03228c5c to 03328c5f has its CatchHandler @ 03228c68 */
                    /* try { // try from 03228c60 to 03328c6b has its CatchHandler @ 03228ad8 */
          in_stack_00000028[1] = in_stack_00000028[1] + 1;
        }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03228c5c with catch @ 03228c68
                        */
        uVar6 = uVar6 | 0xc;
        goto LAB_03228d1c;
      }
      in_w8 = uVar6 | 4;
      uVar9 = uVar6 >> 4;
      in_x10 = in_stack_00000028;
      uVar6 = in_w8;
    } while ((uVar9 & 1) == 0);
  } while( true );
LAB_03228d6c:
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  if (((unaff_w23 >> 1 & 1) == 0) || (uVar9 != 0x20 && 4 < uVar9 - 9)) {
    if (((unaff_w23 >> 3 & 1) == 0) || ((uVar6 & 1) != 0)) {
LAB_03228e1c:
      if ((uVar9 == 0x29) && ((uVar6 >> 1 & 1) != 0)) {
        uVar6 = uVar6 & 0xfffffffd;
      }
      else {
        if (unaff_x25 == 0) {
LAB_03228e7c:
          if ((uVar6 >> 1 & 1) == 0) {
            if ((uVar6 >> 3 & 1) == 0) {
              if ((in_stack_00000010 & 1) == 0) {
                in_stack_00000028[1] = 0;
              }
              if ((uVar6 >> 4 & 1) == 0) {
                FUN_031c834c(in_stack_00000028,0,0);
              }
            }
            uVar4 = 1;
          }
          else {
LAB_03228eb4:
            uVar4 = 0;
          }
          *in_stack_00000008 = (ulong)unaff_x26;
          return uVar4;
        }
        if (*(int *)(*unaff_x21 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        lVar3 = FUN_03229094(unaff_x26);
        if (lVar3 == 0) goto LAB_03228e7c;
        unaff_x25 = 0;
        unaff_x26 = (ushort *)(lVar3 - 2);
      }
    }
    else {
      if (*(int *)(*unaff_x21 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      lVar3 = FUN_03229094(unaff_x26);
      if (lVar3 == 0) {
        if (*(int *)(*unaff_x21 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        lVar3 = FUN_03229094(unaff_x26);
        if (lVar3 == 0) goto LAB_03228e1c;
        FUN_031c834c(in_stack_00000028,1,0);
      }
      uVar6 = uVar6 | 1;
      unaff_x26 = (ushort *)(lVar3 - 2);
    }
  }
  unaff_x26 = unaff_x26 + 1;
  uVar9 = 0;
  if (unaff_x26 < unaff_x24) {
    uVar9 = (uint)*unaff_x26;
  }
  goto LAB_03228d6c;
}


