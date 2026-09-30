/*
FUNCTION_NAME: FUN_02753c34
ENTRY_POINT: 02753c34
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


void FUN_02753c34(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  undefined1 auVar15 [16];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long local_88;
  
  lVar1 = tpidr_el0;
  local_88 = *(long *)(lVar1 + 0x28);
  if ((DAT_037884b2 & 1) == 0) {
    thunk_FUN_00d48444(Method_UnityEngine_XR_Interaction_Toolkit_UI_UIInputModule_PerformRaycast__);
    thunk_FUN_00d48444(UnityEngine_UI_Image_var);
    thunk_FUN_00d48444(StringLiteral_11761);
    thunk_FUN_00d48444(UnityEngine_XR_ARFoundation_ARSessionState_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<ArraySegment<byte>>__ctor__);
    DAT_037884b2 = 1;
  }
  local_90 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  if (((param_1 == 0) ||
      (plVar8 = (long *)FUN_0274adf4(param_1), puVar4 = StringLiteral_11761,
      puVar3 = UnityEngine_XR_ARFoundation_ARSessionState_TypeInfo,
      puVar2 = UnityEngine_UI_Image_var, param_2 == 0)) || (*(long *)(param_2 + 0x10) == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  FUN_01323390(*(long *)(param_2 + 0x10),&local_e0,
               *(undefined8 *)Method_System_Collections_Generic_List<ArraySegment<byte>>__ctor__);
  uStack_a8 = uStack_d8;
  local_b0 = local_e0;
  uStack_98 = uStack_c8;
  local_90 = local_c0;
switchD_02753da0_caseD_70001:
  do {
    uVar9 = FUN_012b894c(&local_b0,*(undefined8 *)puVar2);
    if ((uVar9 & 1) == 0) {
      FUN_012b8948(&local_b0,
                   *(undefined8 *)
                    Method_UnityEngine_XR_Interaction_Toolkit_UI_UIInputModule_PerformRaycast__);
      if (*(long *)(lVar1 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    FUN_00ce1668(&local_e0,&local_b0,*(undefined8 *)puVar4);
    uVar7 = local_cc;
    uVar6 = local_d0;
    uVar5 = uStack_d8._4_4_;
    uVar9 = uStack_d8 & 0xffffffff;
    if ((int)local_e0 < 0x10002) {
      if ((int)local_e0 == 0x10000) {
        FUN_0281be14(&local_e0,uVar9,uStack_d8._4_4_,local_d0,local_cc,0);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar12 = *plVar8;
        uVar9 = (ulong)*(ushort *)(lVar12 + 0x12a);
        if (uVar9 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
              puVar10 = (undefined8 *)(lVar12 + (long)(*piVar14 + 0xe) * 0x10 + 0x138);
              goto LAB_027540cc;
            }
            uVar9 = uVar9 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar9 != 0);
        }
        puVar10 = (undefined8 *)FUN_00d59724(plVar8,*(long *)puVar3,0xe);
LAB_027540cc:
        (*(code *)*puVar10)(plVar8,&local_e0,puVar10[1]);
      }
      else if ((int)local_e0 == 0x10001) {
        auVar15 = FUN_0281d9e8(uVar9,0);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar12 = *plVar8;
        uVar9 = (ulong)*(ushort *)(lVar12 + 0x12a);
        if (uVar9 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
              puVar10 = (undefined8 *)(lVar12 + (long)(*piVar14 + 0x16) * 0x10 + 0x138);
              goto LAB_027540a4;
            }
            uVar9 = uVar9 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar9 != 0);
        }
        puVar10 = (undefined8 *)FUN_00d59724(plVar8,*(long *)puVar3,0x16);
LAB_027540a4:
        (*(code *)*puVar10)(plVar8,auVar15._0_8_,auVar15._8_8_ & 0xffffffff,puVar10[1]);
      }
      goto switchD_02753da0_caseD_70001;
    }
    if ((int)local_e0 < 0x30003) {
      switch((int)local_e0) {
      case 0x20003:
        uVar11 = FUN_0281d760(uVar9,0);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar12 = *plVar8;
        uVar9 = (ulong)*(ushort *)(lVar12 + 0x12a);
        if (uVar9 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
              puVar10 = (undefined8 *)(lVar12 + (long)(*piVar14 + 4) * 0x10 + 0x138);
              goto LAB_02754dc4;
            }
            uVar9 = uVar9 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar9 != 0);
        }
        puVar10 = (undefined8 *)FUN_00d59724(plVar8,*(long *)puVar3,4);
LAB_02754dc4:
        (*(code *)*puVar10)(plVar8,uVar11,puVar10[1]);
        break;
      case 0x20004:
        uVar11 = FUN_0281d760(uVar9,0);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar12 = *plVar8;
        uVar9 = (ulong)*(ushort *)(lVar12 + 0x12a);
        if (uVar9 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
              puVar10 = (undefined8 *)(lVar12 + (long)(*piVar14 + 6) * 0x10 + 0x138);
              goto FUN_02754de8;
            }
            uVar9 = uVar9 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar9 != 0);
        }
        puVar10 = (undefined8 *)FUN_00d59724(plVar8,*(long *)puVar3,6);
FUN_02754de8:
        (*(code *)*puVar10)(plVar8,uVar11,puVar10[1]);
        break;
      case 0x20005:
        uVar11 = FUN_0281d760(uVar9,0);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar12 = *plVar8;
        uVar9 = (ulong)*(ushort *)(lVar12 + 0x12a);
        if (uVar9 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
              puVar10 = (undefined8 *)(lVar12 + (long)(*piVar14 + 8) * 0x10 + 0x138);
              goto LAB_02754d2c;
            }
            uVar9 = uVar9 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar9 != 0);
        }
        puVar10 = (undefined8 *)FUN_00d59724(plVar8,*(long *)puVar3,8);
LAB_02754d2c:
        (*(code *)*puVar10)(plVar8,uVar11,puVar10[1]);
        break;
      case 0x20006:
        uVar11 = FUN_0281d760(uVar9,0);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar12 = *plVar8;
        uVar9 = (ulong)*(ushort *)(lVar12 + 0x12a);
        if (uVar9 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
              puVar10 = (undefined8 *)(lVar12 + (long)(*piVar14 + 0xc) * 0x10 + 0x138);
              goto LAB_02754d78;
            }
            uVar9 = uVar9 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar9 != 0);
        }
        puVar10 = (undefined8 *)FUN_00d59724(plVar8,*(long *)puVar3,0xc);
LAB_02754d78:
        (*(code *)*puVar10)(plVar8,uVar11,puVar10[1]);
        break;
      case 0x20007:
        auVar15 = FUN_0281d9e8(uVar9,0);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar12 = *plVar8;
        uVar9 = (ulong)*(ushort *)(lVar12 + 0x12a);
        if (uVar9 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
              puVar10 = (undefined8 *)(lVar12 + (long)(*piVar14 + 0xd) * 0x10 + 0x138);
              goto LAB_02754cb4;
            }
            uVar9 = uVar9 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar9 != 0);
        }
        puVar10 = (undefined8 *)FUN_00d59724(plVar8,*(long *)puVar3,0xd);
LAB_02754cb4:
        (*(code *)*puVar10)(plVar8,auVar15._0_8_,auVar15._8_8_ & 0xffffffff,puVar10[1]);
        break;
      case 0x20008:
      case 0x20009:
      case 0x2000a:
      case 0x2000d:
      case 0x2000f:
      case 0x20015:
      case 0x20016:
      case 0x20017:
      case 0x20018:
      case 0x2001d:
        break;
      case 0x2000b:
        uVar11 = FUN_0281d760(uVar9,0);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar12 = *plVar8;
        uVar9 = (ulong)*(ushort *)(lVar12 + 0x12a);
        if (uVar9 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
              puVar10 = (undefined8 *)(lVar12 + (long)(*piVar14 + 0x14) * 0x10 + 0x138);
              goto LAB_02754e34;
            }
            uVar9 = uVar9 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar9 != 0);
        }
        puVar10 = (undefined8 *)FUN_00d59724(plVar8,*(long *)puVar3,0x14);
LAB_02754e34:
        (*(code *)*puVar10)(plVar8,uVar11,puVar10[1]);
        break;
      case 0x2000c:
        uVar11 = FUN_0281d760(uVar9,0);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar12 = *plVar8;
        uVar9 = (ulong)*(ushort *)(lVar12 + 0x12a);
        if (uVar9 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
              puVar10 = (undefined8 *)(lVar12 + (long)(*piVar14 + 0x15) * 0x10 + 0x138);
              goto LAB_02754e80;
            }
            uVar9 = uVar9 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar9 != 0);
        }
        puVar10 = (undefined8 *)FUN_00d59724(plVar8,*(long *)puVar3,0x15);
LAB_02754e80:
        (*(code *)*puVar10)(plVar8,uVar11,puVar10[1]);
        break;
      case 0x2000e:
        auVar15 = FUN_0281d9e8(uVar9,0);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar12 = *plVar8;
        uVar9 = (ulong)*(ushort *)(lVar12 + 0x12a);
        if (uVar9 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
              puVar10 = (undefined8 *)(lVar12 + (long)(*piVar14 + 0x17) * 0x10 + 0x138);
              goto LAB_02754d9c;
            }
            uVar9 = uVar9 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar9 != 0);
        }
        puVar10 = (undefined8 *)FUN_00d59724(plVar8,*(long *)puVar3,0x17);
LAB_02754d9c:
        (*(code *)*puVar10)(plVar8,auVar15._0_8_,auVar15._8_8_ & 0xffffffff,puVar10[1]);
        break;
      case 0x20010:
        auVar15 = FUN_0281d9e8(uVar9,0);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar12 = *plVar8;
        uVar9 = (ulong)*(ushort *)(lVar12 + 0x12a);
        if (uVar9 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
              puVar10 = (undefined8 *)(lVar12 + (long)(*piVar14 + 0x18) * 0x10 + 0x138);
              goto LAB_02754ef4;
            }
            uVar9 = uVar9 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar9 != 0);
        }
        puVar10 = (undefined8 *)FUN_00d59724(plVar8,*(long *)puVar3,0x18);
LAB_02754ef4:
        (*(code *)*puVar10)(plVar8,auVar15._0_8_,auVar15._8_8_ & 0xffffffff,puVar10[1]);
        break;
      case 0x20011:
        auVar15 = FUN_0281d9e8(uVar9,0);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar12 = *plVar8;
        uVar9 = (ulong)*(ushort *)(lVar12 + 0x12a);
        if (uVar9 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
              puVar10 = (undefined8 *)(lVar12 + (long)(*piVar14 + 0x19) * 0x10 + 0x138);
              goto LAB_02754d04;
            }
            uVar9 = uVar9 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar9 != 0);
        }
        puVar10 = (undefined8 *)FUN_00d59724(plVar8,*(long *)puVar3,0x19);
LAB_02754d04:
        (*(code *)*puVar10)(plVar8,auVar15._0_8_,auVar15._8_8_ & 0xffffffff,puVar10[1]);
        break;
      case 0x20012:
        auVar15 = FUN_0281d9e8(uVar9,0);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar12 = *plVar8;
        uVar9 = (ulong)*(ushort *)(lVar12 + 0x12a);
        if (uVar9 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
              puVar10 = (undefined8 *)(lVar12 + (long)(*piVar14 + 0x1a) * 0x10 + 0x138);
              goto LAB_02754ecc;
            }
            uVar9 = uVar9 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar9 != 0);
        }
        puVar10 = (undefined8 *)FUN_00d59724(plVar8,*(long *)puVar3,0x1a);
LAB_02754ecc:
        (*(code *)*puVar10)(plVar8,auVar15._0_8_,auVar15._8_8_ & 0xffffffff,puVar10[1]);
        break;
      case 0x20013:
        auVar15 = FUN_0281d9e8(uVar9,0);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar12 = *plVar8;
        uVar9 = (ulong)*(ushort *)(lVar12 + 0x12a);
        if (uVar9 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
              puVar10 = (undefined8 *)(lVar12 + (long)(*piVar14 + 0x1b) * 0x10 + 0x138);
              goto LAB_02754c8c;
            }
            uVar9 = uVar9 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar9 != 0);
        }
        puVar10 = (undefined8 *)FUN_00d59724(plVar8,*(long *)puVar3,0x1b);
LAB_02754c8c:
        (*(code *)*puVar10)(plVar8,auVar15._0_8_,auVar15._8_8_ & 0xffffffff,puVar10[1]);
        break;
      case 0x20014:
        auVar15 = FUN_0281d9e8(uVar9,0);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar12 = *plVar8;
        uVar9 = (ulong)*(ushort *)(lVar12 + 0x12a);
        if (uVar9 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
              puVar10 = (undefined8 *)(lVar12 + (long)(*piVar14 + 0x1c) * 0x10 + 0x138);
              goto LAB_02754cdc;
            }
            uVar9 = uVar9 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar9 != 0);
        }
        puVar10 = (undefined8 *)FUN_00d59724(plVar8,*(long *)puVar3,0x1c);
LAB_02754cdc:
        (*(code *)*puVar10)(plVar8,auVar15._0_8_,auVar15._8_8_ & 0xffffffff,puVar10[1]);
        break;
      case 0x20019:
        auVar15 = FUN_0281d9e8(uVar9,0);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar12 = *plVar8;
        uVar9 = (ulong)*(ushort *)(lVar12 + 0x12a);
        if (uVar9 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
              puVar10 = (undefined8 *)(lVar12 + (long)(*piVar14 + 0x20) * 0x10 + 0x138);
              goto LAB_02754e58;
            }
            uVar9 = uVar9 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar9 != 0);
        }
        puVar10 = (undefined8 *)FUN_00d59724(plVar8,*(long *)puVar3,0x20);
LAB_02754e58:
        (*(code *)*puVar10)(plVar8,auVar15._0_8_,auVar15._8_8_ & 0xffffffff,puVar10[1]);
        break;
      case 0x2001a:
        auVar15 = FUN_0281d9e8(uVar9,0);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar12 = *plVar8;
        uVar9 = (ulong)*(ushort *)(lVar12 + 0x12a);
        if (uVar9 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
              puVar10 = (undefined8 *)(lVar12 + (long)(*piVar14 + 0x21) * 0x10 + 0x138);
              goto LAB_02754c64;
            }
            uVar9 = uVar9 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar9 != 0);
        }
        puVar10 = (undefined8 *)FUN_00d59724(plVar8,*(long *)puVar3,0x21);
LAB_02754c64:
        (*(code *)*puVar10)(plVar8,auVar15._0_8_,auVar15._8_8_ & 0xffffffff,puVar10[1]);
        break;
      case 0x2001b:
        auVar15 = FUN_0281d9e8(uVar9,0);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar12 = *plVar8;
        uVar9 = (ulong)*(ushort *)(lVar12 + 0x12a);
        if (uVar9 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
              puVar10 = (undefined8 *)(lVar12 + (long)(*piVar14 + 0x22) * 0x10 + 0x138);
              goto LAB_02754d50;
            }
            uVar9 = uVar9 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar9 != 0);
        }
        puVar10 = (undefined8 *)FUN_00d59724(plVar8,*(long *)puVar3,0x22);
LAB_02754d50:
        (*(code *)*puVar10)(plVar8,auVar15._0_8_,auVar15._8_8_ & 0xffffffff,puVar10[1]);
        break;
      case 0x2001c:
        auVar15 = FUN_0281d9e8(uVar9,0);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar12 = *plVar8;
        uVar9 = (ulong)*(ushort *)(lVar12 + 0x12a);
        if (uVar9 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
              puVar10 = (undefined8 *)(lVar12 + (long)(*piVar14 + 0x24) * 0x10 + 0x138);
              goto LAB_02754c3c;
            }
            uVar9 = uVar9 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar9 != 0);
        }
        puVar10 = (undefined8 *)FUN_00d59724(plVar8,*(long *)puVar3,0x24);
LAB_02754c3c:
        (*(code *)*puVar10)(plVar8,auVar15._0_8_,auVar15._8_8_ & 0xffffffff,puVar10[1]);
        break;
      case 0x2001e:
        auVar15 = FUN_0281d9e8(uVar9,0);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar12 = *plVar8;
        uVar9 = (ulong)*(ushort *)(lVar12 + 0x12a);
        if (uVar9 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
              puVar10 = (undefined8 *)(lVar12 + (long)(*piVar14 + 0x26) * 0x10 + 0x138);
              goto LAB_02754e0c;
            }
            uVar9 = uVar9 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar9 != 0);
        }
        puVar10 = (undefined8 *)FUN_00d59724(plVar8,*(long *)puVar3,0x26);
LAB_02754e0c:
        (*(code *)*puVar10)(plVar8,auVar15._0_8_,auVar15._8_8_ & 0xffffffff,puVar10[1]);
        break;
      case 0x2001f:
        auVar15 = FUN_0281d9e8(uVar9,0);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar12 = *plVar8;
        uVar9 = (ulong)*(ushort *)(lVar12 + 0x12a);
        if (uVar9 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
              puVar10 = (undefined8 *)(lVar12 + (long)(*piVar14 + 0x2a) * 0x10 + 0x138);
              goto LAB_02754ea4;
            }
            uVar9 = uVar9 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar9 != 0);
        }
        puVar10 = (undefined8 *)FUN_00d59724(plVar8,*(long *)puVar3,0x2a);
LAB_02754ea4:
        (*(code *)*puVar10)(plVar8,auVar15._0_8_,auVar15._8_8_ & 0xffffffff,puVar10[1]);
        break;
      case 0x20020:
        auVar15 = FUN_0281d9e8(uVar9,0);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar12 = *plVar8;
        uVar9 = (ulong)*(ushort *)(lVar12 + 0x12a);
        if (uVar9 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
              puVar10 = (undefined8 *)(lVar12 + (long)(*piVar14 + 0x31) * 0x10 + 0x138);
              goto LAB_02754f1c;
            }
            uVar9 = uVar9 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar9 != 0);
        }
        puVar10 = (undefined8 *)FUN_00d59724(plVar8,*(long *)puVar3,0x31);
LAB_02754f1c:
        (*(code *)*puVar10)(plVar8,auVar15._0_8_,auVar15._8_8_ & 0xffffffff,puVar10[1]);
        break;
      default:
        if ((int)local_e0 == 0x30002) {
          FUN_0281be14(&local_e0,uVar9,uStack_d8._4_4_,local_d0,local_cc,0);
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          lVar12 = *plVar8;
          uVar9 = (ulong)*(ushort *)(lVar12 + 0x12a);
          if (uVar9 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
                puVar10 = (undefined8 *)(lVar12 + (long)(*piVar14 + 0x2e) * 0x10 + 0x138);
                goto LAB_02754f44;
              }
              uVar9 = uVar9 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar9 != 0);
          }
          puVar10 = (undefined8 *)FUN_00d59724(plVar8,*(long *)puVar3,0x2e);
LAB_02754f44:
          (*(code *)*puVar10)(plVar8,&local_e0,puVar10[1]);
        }
      }
    }
    else {
      switch((int)local_e0) {
      case 0x70000:
        FUN_0281be14(&local_e0,uVar9,uStack_d8._4_4_,local_d0,local_cc,0);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar12 = *plVar8;
        uVar9 = (ulong)*(ushort *)(lVar12 + 0x12a);
        if (uVar9 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
              puVar10 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
              goto FUN_027549a0;
            }
            uVar9 = uVar9 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar9 != 0);
        }
        puVar10 = (undefined8 *)FUN_00d59724(plVar8,*(long *)puVar3,0);
FUN_027549a0:
        (*(code *)*puVar10)(plVar8,&local_e0,puVar10[1]);
        break;
      case 0x70001:
      case 0x70002:
      case 0x70005:
      case 0x70006:
      case 0x70007:
        break;
      case 0x70003:
        auVar15 = FUN_0281d9e8(uVar9,0);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar12 = *plVar8;
        uVar9 = (ulong)*(ushort *)(lVar12 + 0x12a);
        if (uVar9 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
              puVar10 = (undefined8 *)(lVar12 + (long)(*piVar14 + 2) * 0x10 + 0x138);
              goto LAB_027549d8;
            }
            uVar9 = uVar9 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar9 != 0);
        }
        puVar10 = (undefined8 *)FUN_00d59724(plVar8,*(long *)puVar3,2);
LAB_027549d8:
        (*(code *)*puVar10)(plVar8,auVar15._0_8_,auVar15._8_8_ & 0xffffffff,puVar10[1]);
        break;
      case 0x70004:
        auVar15 = FUN_0281d9e8(uVar9,0);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar12 = *plVar8;
        uVar9 = (ulong)*(ushort *)(lVar12 + 0x12a);
        if (uVar9 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
              puVar10 = (undefined8 *)(lVar12 + (long)(*piVar14 + 3) * 0x10 + 0x138);
              goto LAB_02754954;
            }
            uVar9 = uVar9 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar9 != 0);
        }
        puVar10 = (undefined8 *)FUN_00d59724(plVar8,*(long *)puVar3,3);
LAB_02754954:
        (*(code *)*puVar10)(plVar8,auVar15._0_8_,auVar15._8_8_ & 0xffffffff,puVar10[1]);
        break;
      case 0x70008:
        auVar15 = FUN_0281d9e8(uVar9,0);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar12 = *plVar8;
        uVar9 = (ulong)*(ushort *)(lVar12 + 0x12a);
        if (uVar9 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
              puVar10 = (undefined8 *)(lVar12 + (long)(*piVar14 + 10) * 0x10 + 0x138);
              goto LAB_0275497c;
            }
            uVar9 = uVar9 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar9 != 0);
        }
        puVar10 = (undefined8 *)FUN_00d59724(plVar8,*(long *)puVar3,10);
LAB_0275497c:
        (*(code *)*puVar10)(plVar8,auVar15._0_8_,auVar15._8_8_ & 0xffffffff,puVar10[1]);
        break;
      case 0x70009:
        auVar15 = FUN_0281d9e8(uVar9,0);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar12 = *plVar8;
        uVar9 = (ulong)*(ushort *)(lVar12 + 0x12a);
        if (uVar9 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
              puVar10 = (undefined8 *)(lVar12 + (long)(*piVar14 + 0xb) * 0x10 + 0x138);
              goto LAB_0275492c;
            }
            uVar9 = uVar9 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar9 != 0);
        }
        puVar10 = (undefined8 *)FUN_00d59724(plVar8,*(long *)puVar3,0xb);
LAB_0275492c:
        (*(code *)*puVar10)(plVar8,auVar15._0_8_,auVar15._8_8_ & 0xffffffff,puVar10[1]);
        break;
      case 0x7000a:
        uVar11 = FUN_0281d760(uVar9,0);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar12 = *plVar8;
        uVar9 = (ulong)*(ushort *)(lVar12 + 0x12a);
        if (uVar9 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
              puVar10 = (undefined8 *)(lVar12 + (long)(*piVar14 + 0x1f) * 0x10 + 0x138);
              goto LAB_02754a00;
            }
            uVar9 = uVar9 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar9 != 0);
        }
        puVar10 = (undefined8 *)FUN_00d59724(plVar8,*(long *)puVar3,0x1f);
LAB_02754a00:
        (*(code *)*puVar10)(plVar8,uVar11,puVar10[1]);
        break;
      default:
        if ((int)local_e0 == 0x40001) {
          FUN_0281be14(&local_e0,uVar9,uStack_d8._4_4_,local_d0,local_cc,0);
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          lVar12 = *plVar8;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
                puVar10 = (undefined8 *)(lVar12 + (long)(*piVar14 + 5) * 0x10 + 0x138);
                goto UnityEngine_Yoga_Native__YGNodeFreeInternal;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar10 = (undefined8 *)FUN_00d59724(plVar8,*(long *)puVar3,5);
UnityEngine_Yoga_Native__YGNodeFreeInternal:
          (*(code *)*puVar10)(plVar8,&local_e0,puVar10[1]);
          FUN_0281be14(&local_e0,uVar9,uVar5,uVar6,uVar7,0);
          lVar12 = *plVar8;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
                puVar10 = (undefined8 *)(lVar12 + (long)(*piVar14 + 9) * 0x10 + 0x138);
                goto FUN_02754ac4;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar10 = (undefined8 *)FUN_00d59724(plVar8,*(long *)puVar3,9);
FUN_02754ac4:
          (*(code *)*puVar10)(plVar8,&local_e0,puVar10[1]);
          FUN_0281be14(&local_e0,uVar9,uVar5,uVar6,uVar7,0);
          lVar12 = *plVar8;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
                puVar10 = (undefined8 *)(lVar12 + (long)(*piVar14 + 7) * 0x10 + 0x138);
                goto LAB_02754b64;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar10 = (undefined8 *)FUN_00d59724(plVar8,*(long *)puVar3,7);
LAB_02754b64:
          (*(code *)*puVar10)(plVar8,&local_e0,puVar10[1]);
          FUN_0281be14(&local_e0,uVar9,uVar5,uVar6,uVar7,0);
          lVar12 = *plVar8;
          uVar9 = (ulong)*(ushort *)(lVar12 + 0x12a);
          if (uVar9 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
                puVar10 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                goto LAB_02754c04;
              }
              uVar9 = uVar9 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar9 != 0);
          }
          puVar10 = (undefined8 *)FUN_00d59724(plVar8,*(long *)puVar3,1);
LAB_02754c04:
          (*(code *)*puVar10)(plVar8,&local_e0,puVar10[1]);
        }
      }
    }
  } while( true );
}


