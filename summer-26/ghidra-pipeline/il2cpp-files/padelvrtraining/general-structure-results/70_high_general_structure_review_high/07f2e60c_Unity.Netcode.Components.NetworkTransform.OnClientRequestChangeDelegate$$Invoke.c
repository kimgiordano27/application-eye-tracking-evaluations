/*
FUNCTION_NAME: Unity.Netcode.Components.NetworkTransform.OnClientRequestChangeDelegate$$Invoke
ENTRY_POINT: 07f2e60c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_11;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x07f2e790) */
/* WARNING: Removing unreachable block (ram,0x07f2ea18) */

undefined4
Unity_Netcode_Components_NetworkTransform_OnClientRequestChangeDelegate__Invoke
          (long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined1 in_ZR;
  int iVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong in_x9;
  ulong uVar9;
  int *piVar10;
  int *in_x10;
  long *unaff_x19;
  long unaff_x20;
  char unaff_w21;
  long *unaff_x22;
  long *unaff_x24;
  long unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  undefined8 in_stack_00000000;
  long in_stack_00000008;
  
  do {
    if ((bool)in_ZR) {
      puVar5 = (undefined8 *)(param_1 + (long)(*in_x10 + 6) * 0x10 + 0x138);
      goto LAB_07f2e684;
    }
    in_x9 = in_x9 - 1;
    in_x10 = in_x10 + 4;
    if (in_x9 == 0) {
      do {
        puVar5 = (undefined8 *)FUN_03d8f370();
LAB_07f2e684:
        (*(code *)*puVar5)();
LAB_07f2e694:
        do {
          do {
            lVar8 = *unaff_x19;
            uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0925fa80) {
                  puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 8) * 0x10 + 0x138);
                  goto Unity_Netcode_Components_NetworkTransform____rpc_handler_640767722;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar5 = (undefined8 *)FUN_03d8f370();
Unity_Netcode_Components_NetworkTransform____rpc_handler_640767722:
            (*(code *)*puVar5)();
            lVar8 = *unaff_x27;
            uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == *unaff_x22) {
                  puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                  goto LAB_07f2e330;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar5 = (undefined8 *)FUN_03d8f370();
LAB_07f2e330:
            uVar9 = (*(code *)*puVar5)();
            puVar3 = PTR_DAT_091a14e0;
            if ((uVar9 & 1) == 0) {
              plVar6 = (long *)thunk_FUN_03d2ee44();
              if (plVar6 == (long *)0x0) goto LAB_07f2e780;
              lVar8 = *plVar6;
              uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar9 == 0)
              goto Unity_Netcode_Components_NetworkTransform_NetworkTransformState__set_BitSet;
              piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              goto LAB_07f2e740;
            }
            lVar8 = *unaff_x27;
            uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == *unaff_x22) {
                  puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                  goto LAB_07f2e390;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar5 = (undefined8 *)FUN_03d8f370();
LAB_07f2e390:
            (*(code *)*puVar5)();
            if (*(int *)(*unaff_x26 + 0xe0) == 0) {
              thunk_FUN_03db619c();
            }
            if (*(char *)(unaff_x25 + 0xa86) == '\0') {
              FUN_03d2d2b0();
              *(char *)(unaff_x25 + 0xa86) = unaff_w21;
            }
            lVar8 = *unaff_x26;
            if (*(int *)(lVar8 + 0xe0) == 0) {
              thunk_FUN_03db619c(lVar8);
              lVar8 = *unaff_x26;
            }
            iVar1 = **(int **)(lVar8 + 0xb8);
            if (cRam000000000984ea87 == '\0') {
              FUN_03d2d2b0();
              lVar8 = *unaff_x26;
              cRam000000000984ea87 = unaff_w21;
            }
            if (*(int *)(lVar8 + 0xe0) == 0) {
              thunk_FUN_03db619c(lVar8);
              lVar8 = *unaff_x26;
            }
            **(int **)(lVar8 + 0xb8) = iVar1 + 1;
          } while (unaff_x20 == 0);
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_03db619c(lVar8);
          }
          if (*(char *)(unaff_x25 + 0xa86) == '\0') {
            FUN_03d2d2b0();
            *(char *)(unaff_x25 + 0xa86) = unaff_w21;
          }
          lVar8 = *unaff_x26;
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_03db619c(lVar8);
            lVar8 = *unaff_x26;
          }
        } while (**(int **)(lVar8 + 0xb8) == 0);
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_03db619c(lVar8);
        }
        if (*(char *)(unaff_x25 + 0xa86) == '\0') {
          FUN_03d2d2b0();
          *(char *)(unaff_x25 + 0xa86) = unaff_w21;
        }
        lVar8 = *unaff_x26;
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_03db619c();
          lVar8 = *unaff_x26;
        }
        lVar7 = *unaff_x24;
        iVar1 = **(int **)(lVar8 + 0xb8);
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_091adb18) {
              puVar5 = (undefined8 *)(lVar7 + (long)(*piVar10 + 1) * 0x10 + 0x138);
              goto LAB_07f2e508;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_03d8f370();
LAB_07f2e508:
        iVar4 = (*(code *)*puVar5)();
        if (iVar1 < iVar4 + -1) {
          lVar8 = *unaff_x19;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0925fa80) {
                puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 6) * 0x10 + 0x138);
                goto LAB_07f2e63c;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar5 = (undefined8 *)FUN_03d8f370();
LAB_07f2e63c:
          (*(code *)*puVar5)();
          goto LAB_07f2e694;
        }
        if (*(int *)(*unaff_x26 + 0xe0) == 0) {
          thunk_FUN_03db619c();
        }
        if (*(char *)(unaff_x25 + 0xa86) == '\0') {
          FUN_03d2d2b0();
          *(char *)(unaff_x25 + 0xa86) = unaff_w21;
        }
        lVar8 = *unaff_x26;
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_03db619c();
          lVar8 = *unaff_x26;
        }
        param_1 = *unaff_x19;
        param_3 = *(long *)PTR_DAT_0925fa80;
        uVar2 = *(ushort *)(param_1 + 0x12e);
        in_x9 = (ulong)uVar2;
        if (**(int **)(lVar8 + 0xb8) == 1) {
          if (uVar2 != 0) {
            piVar10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == param_3) {
                puVar5 = (undefined8 *)(param_1 + (long)(*piVar10 + 6) * 0x10 + 0x138);
                goto LAB_07f2e660;
              }
              in_x9 = in_x9 - 1;
              piVar10 = piVar10 + 4;
            } while (in_x9 != 0);
          }
          puVar5 = (undefined8 *)FUN_03d8f370();
LAB_07f2e660:
          (*(code *)*puVar5)();
          goto LAB_07f2e694;
        }
      } while (uVar2 == 0);
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    }
    in_ZR = *(long *)(in_x10 + -2) == param_3;
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_07f2e740:
    if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
      puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
      goto Unity_Netcode_Components_NetworkTransform_NetworkTransformState__get_LastSerializedSize;
    }
  }
Unity_Netcode_Components_NetworkTransform_NetworkTransformState__set_BitSet:
  puVar5 = (undefined8 *)FUN_03d8f370(plVar6,*(long *)puVar3,0);
Unity_Netcode_Components_NetworkTransform_NetworkTransformState__get_LastSerializedSize:
  (*(code *)*puVar5)(plVar6,puVar5[1]);
LAB_07f2e780:
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  if (cRam000000000984ea87 == '\0') {
    FUN_03d2d2b0(PTR_DAT_0925efa8);
    cRam000000000984ea87 = '\x01';
  }
  lVar8 = *unaff_x26;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_03db619c();
    lVar8 = *unaff_x26;
  }
  **(undefined4 **)(lVar8 + 0xb8) = in_stack_00000000._4_4_;
  if (in_stack_00000008 != 0) {
    if (*(int *)(*(long *)PTR_StringLiteral_52275_0925ea90 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    FUN_067aca6c(in_stack_00000008,*(undefined8 *)PTR_DAT_0925fb58);
  }
  return 1;
}


