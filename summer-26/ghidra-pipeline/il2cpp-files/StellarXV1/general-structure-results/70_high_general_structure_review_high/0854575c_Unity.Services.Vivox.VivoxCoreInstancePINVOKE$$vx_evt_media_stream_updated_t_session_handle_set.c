/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_media_stream_updated_t_session_handle_set
ENTRY_POINT: 0854575c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_14;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x08545b70) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_media_stream_updated_t_session_handle_set
               (long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar9;
  long lVar10;
  undefined8 unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long *unaff_x26;
  long unaff_x27;
  undefined1 auVar11 [12];
  long in_stack_00000010;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  lVar6 = *(long *)(*(long *)(param_1 + 0xb8) + 8);
  if (lVar6 != 0) {
    if (*(char *)(lVar6 + 0x18) != '\0') {
      if (*(int *)(param_1 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      if (*(char *)(unaff_x27 + 0xfbf) == '\0') {
        FUN_04077588(PTR_DAT_093259d0);
        *(undefined1 *)(unaff_x27 + 0xfbf) = 1;
      }
      lVar6 = *unaff_x26;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        lVar6 = *unaff_x26;
      }
      if ((unaff_x25 == 0) || (lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 8), lVar6 == 0))
      goto LAB_08545b68;
      uVar2 = FUN_0841d26c(lVar6,*(undefined8 *)(unaff_x25 + 0xd8),&stack0x00000028,&stack0x00000020
                           ,0);
      if ((uVar2 & 1) != 0) {
        FUN_084f8008();
        if (unaff_x23 == 0) goto LAB_08545b68;
        plVar3 = (long *)FUN_05189930();
        if (in_stack_00000010 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        *(undefined8 *)(in_stack_00000010 + 0x24) = in_stack_00000020;
        *(undefined8 *)(in_stack_00000010 + 0x10) = *(undefined8 *)(unaff_x24 + 0xb8);
        thunk_FUN_040ec700();
        auVar11 = FUN_0847095c();
        if (in_stack_00000010 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        *(undefined1 (*) [12])(in_stack_00000010 + 0x18) = auVar11;
        if (in_stack_00000010 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        *(undefined8 *)(in_stack_00000010 + 0x34) = unaff_x21;
        *(undefined8 *)(in_stack_00000010 + 0x2c) = unaff_x22;
        *(undefined8 *)(in_stack_00000010 + 0x3c) = unaff_x20;
        *(undefined8 *)(in_stack_00000010 + 0x44) = unaff_x19;
        puVar1 = PTR_DAT_09327080;
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        lVar6 = *plVar3;
        uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar2 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_09327080) {
              puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 4) * 0x10 + 0x138);
              goto LAB_085458e0;
            }
            uVar2 = uVar2 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar2 != 0);
        }
        puVar4 = (undefined8 *)FUN_040b1e00(plVar3,*(long *)PTR_DAT_09327080,4);
LAB_085458e0:
        (*(code *)*puVar4)(plVar3,in_stack_00000010 + 0x18,2,puVar4[1]);
        if (in_stack_00000010 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        lVar7 = *plVar3;
        lVar6 = *(long *)puVar1;
        uVar2 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar2 != 0) {
          piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == lVar6) {
              puVar4 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_08545950;
            }
            uVar2 = uVar2 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar2 != 0);
        }
        puVar4 = (undefined8 *)FUN_040b1e00(plVar3,lVar6,0);
LAB_08545950:
        (*(code *)*puVar4)(plVar3,in_stack_00000010 + 0x2c,1,puVar4[1]);
        if (in_stack_00000010 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        lVar7 = *plVar3;
        lVar6 = *(long *)puVar1;
        uVar2 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar2 != 0) {
          piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == lVar6) {
              puVar4 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_085459c0;
            }
            uVar2 = uVar2 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar2 != 0);
        }
        puVar4 = (undefined8 *)FUN_040b1e00(plVar3,lVar6,0);
LAB_085459c0:
        (*(code *)*puVar4)(plVar3,in_stack_00000010 + 0x3c,1,puVar4[1]);
        puVar1 = PTR_DAT_0932e230;
        lVar6 = *(long *)PTR_DAT_0932e230;
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
          lVar6 = *(long *)puVar1;
        }
        puVar4 = *(undefined8 **)(lVar6 + 0xb8);
        lVar7 = puVar4[1];
        if (lVar7 == 0) {
          if (*(int *)(lVar6 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
            puVar4 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
          }
          uVar9 = *puVar4;
          lVar7 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0932e210);
          FUN_06ac8788(lVar7,uVar9,*(undefined8 *)PTR_DAT_0932e228,0);
          plVar5 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
          *plVar5 = lVar7;
          thunk_FUN_040ec700(plVar5,lVar7);
        }
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        lVar6 = *plVar3;
        lVar10 = *(long *)PTR_DAT_0932e218;
        uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar2 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)(lVar10 + 0x20)) {
              lVar6 = lVar6 + (long)(int)(*piVar8 + (uint)*(ushort *)(lVar10 + 0x50)) * 0x10 + 0x138
              ;
              goto LAB_08545ab8;
            }
            uVar2 = uVar2 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar2 != 0);
        }
        lVar6 = FUN_040b1e00(plVar3);
LAB_08545ab8:
        lVar6 = thunk_FUN_04096bb4(*(undefined8 *)(lVar6 + 8),lVar10);
        (**(code **)(lVar6 + 8))(plVar3,lVar7,lVar6);
        if (plVar3 != (long *)0x0) {
          lVar6 = *plVar3;
          uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar2 != 0) {
            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_092860c0) {
                puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_08545b3c;
              }
              uVar2 = uVar2 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar2 != 0);
          }
          puVar4 = (undefined8 *)FUN_040b1e00(plVar3,*(long *)PTR_DAT_092860c0,0);
LAB_08545b3c:
          (*(code *)*puVar4)(plVar3,puVar4[1]);
        }
      }
    }
    return;
  }
LAB_08545b68:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


