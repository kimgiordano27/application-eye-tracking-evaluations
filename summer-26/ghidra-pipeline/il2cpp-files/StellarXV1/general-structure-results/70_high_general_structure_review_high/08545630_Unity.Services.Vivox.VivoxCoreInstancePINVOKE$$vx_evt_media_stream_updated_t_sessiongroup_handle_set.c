/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_media_stream_updated_t_sessiongroup_handle_set
ENTRY_POINT: 08545630
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_15;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x08545b70) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_media_stream_updated_t_sessiongroup_handle_set
               (long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
               undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  int *piVar10;
  undefined8 uVar11;
  undefined1 auVar12 [12];
  long in_stack_00000010;
  long *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  if ((DAT_0989d9c3 & 1) == 0) {
    FUN_04077588(PTR_DAT_0932e210);
    FUN_04077588(PTR_DAT_0932c838);
    FUN_04077588(PTR_DAT_09327080);
    FUN_04077588(PTR_DAT_0932e218);
    FUN_04077588(PTR_DAT_092860c0);
    FUN_04077588(PTR_DAT_093259d0);
    FUN_04077588(PTR_DAT_0932e220);
    FUN_04077588(PTR_DAT_0932e228);
    FUN_04077588(PTR_DAT_0932e230);
    FUN_04077588(PTR_DAT_0932e238);
    DAT_0989d9c3 = 1;
  }
  puVar1 = PTR_DAT_093259d0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000010 = 0;
  in_stack_00000018 = (long *)0x0;
  if (param_3 != 0) {
    lVar3 = FUN_084f7088(param_3,*(undefined8 *)PTR_DAT_0932c838);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_040d65a8(*(long *)puVar1);
    }
    if (DAT_0989cfbf == '\0') {
      FUN_04077588(PTR_DAT_093259d0);
      DAT_0989cfbf = '\x01';
    }
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar4 = *(long *)puVar1;
    }
    lVar9 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
    if (lVar9 != 0) {
      if (*(char *)(lVar9 + 0x18) != '\0') {
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        if (DAT_0989cfbf == '\0') {
          FUN_04077588(PTR_DAT_093259d0);
          DAT_0989cfbf = '\x01';
        }
        lVar4 = *(long *)puVar1;
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
          lVar4 = *(long *)puVar1;
        }
        if ((lVar3 == 0) || (lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8), lVar4 == 0))
        goto LAB_08545b68;
        uVar5 = FUN_0841d26c(lVar4,*(undefined8 *)(lVar3 + 0xd8),&stack0x00000028,&stack0x00000020,0
                            );
        if ((uVar5 & 1) != 0) {
          uVar11 = *(undefined8 *)(param_1 + 0x40);
          uVar6 = FUN_084f8008(param_1,0);
          if (param_2 == 0) goto LAB_08545b68;
          in_stack_00000018 =
               (long *)FUN_05189930(param_2,uVar11,&stack0x00000010,uVar6,
                                    *(undefined8 *)PTR_DAT_0932e238,0x51,
                                    *(undefined8 *)PTR_DAT_0932e220);
          if (in_stack_00000010 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          *(undefined8 *)(in_stack_00000010 + 0x24) = in_stack_00000020;
          *(undefined8 *)(in_stack_00000010 + 0x10) = *(undefined8 *)(param_1 + 0xb8);
          thunk_FUN_040ec700();
          lVar3 = in_stack_00000010;
          auVar12 = FUN_0847095c(param_2,in_stack_00000028,0,0);
          plVar2 = in_stack_00000018;
          lVar4 = in_stack_00000010;
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          *(undefined1 (*) [12])(lVar3 + 0x18) = auVar12;
          if (in_stack_00000010 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          *(undefined8 *)(in_stack_00000010 + 0x34) = param_5;
          *(undefined8 *)(in_stack_00000010 + 0x2c) = param_4;
          *(undefined8 *)(in_stack_00000010 + 0x3c) = param_6;
          *(undefined8 *)(in_stack_00000010 + 0x44) = param_7;
          puVar1 = PTR_DAT_09327080;
          if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar3 = *in_stack_00000018;
          uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar5 != 0) {
            piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_09327080) {
                puVar7 = (undefined8 *)(lVar3 + (long)(*piVar10 + 4) * 0x10 + 0x138);
                goto LAB_085458e0;
              }
              uVar5 = uVar5 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar5 != 0);
          }
          puVar7 = (undefined8 *)FUN_040b1e00(in_stack_00000018,*(long *)PTR_DAT_09327080,4);
LAB_085458e0:
          (*(code *)*puVar7)(plVar2,lVar4 + 0x18,2,puVar7[1]);
          plVar2 = in_stack_00000018;
          lVar3 = in_stack_00000010;
          if (in_stack_00000010 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar9 = *in_stack_00000018;
          lVar4 = *(long *)puVar1;
          uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar5 != 0) {
            piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == lVar4) {
                puVar7 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_08545950;
              }
              uVar5 = uVar5 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar5 != 0);
          }
          puVar7 = (undefined8 *)FUN_040b1e00(in_stack_00000018,lVar4,0);
LAB_08545950:
          (*(code *)*puVar7)(plVar2,lVar3 + 0x2c,1,puVar7[1]);
          plVar2 = in_stack_00000018;
          lVar3 = in_stack_00000010;
          if (in_stack_00000010 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar9 = *in_stack_00000018;
          lVar4 = *(long *)puVar1;
          uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar5 != 0) {
            piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == lVar4) {
                puVar7 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_085459c0;
              }
              uVar5 = uVar5 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar5 != 0);
          }
          puVar7 = (undefined8 *)FUN_040b1e00(in_stack_00000018,lVar4,0);
LAB_085459c0:
          (*(code *)*puVar7)(plVar2,lVar3 + 0x3c,1,puVar7[1]);
          plVar2 = in_stack_00000018;
          puVar1 = PTR_DAT_0932e230;
          lVar3 = *(long *)PTR_DAT_0932e230;
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
            lVar3 = *(long *)puVar1;
          }
          puVar7 = *(undefined8 **)(lVar3 + 0xb8);
          lVar4 = puVar7[1];
          if (lVar4 == 0) {
            if (*(int *)(lVar3 + 0xe4) == 0) {
              thunk_FUN_040d65a8();
              puVar7 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
            }
            uVar6 = *puVar7;
            lVar4 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0932e210);
            FUN_06ac8788(lVar4,uVar6,*(undefined8 *)PTR_DAT_0932e228,0);
            plVar8 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
            *plVar8 = lVar4;
            thunk_FUN_040ec700(plVar8,lVar4);
          }
          if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar3 = *plVar2;
          lVar9 = *(long *)PTR_DAT_0932e218;
          uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar5 != 0) {
            piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)(lVar9 + 0x20)) {
                lVar3 = lVar3 + (long)(int)(*piVar10 + (uint)*(ushort *)(lVar9 + 0x50)) * 0x10 +
                        0x138;
                goto LAB_08545ab8;
              }
              uVar5 = uVar5 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar5 != 0);
          }
          lVar3 = FUN_040b1e00(plVar2);
LAB_08545ab8:
          lVar3 = thunk_FUN_04096bb4(*(undefined8 *)(lVar3 + 8),lVar9);
          (**(code **)(lVar3 + 8))(plVar2,lVar4,lVar3);
          plVar2 = in_stack_00000018;
          if (in_stack_00000018 != (long *)0x0) {
            lVar3 = *in_stack_00000018;
            uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
            if (uVar5 != 0) {
              piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_092860c0) {
                  puVar7 = (undefined8 *)(lVar3 + (long)*piVar10 * 0x10 + 0x138);
                  goto LAB_08545b3c;
                }
                uVar5 = uVar5 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar5 != 0);
            }
            puVar7 = (undefined8 *)FUN_040b1e00(in_stack_00000018,*(long *)PTR_DAT_092860c0,0);
LAB_08545b3c:
            (*(code *)*puVar7)(plVar2,puVar7[1]);
          }
        }
      }
      return;
    }
  }
LAB_08545b68:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


