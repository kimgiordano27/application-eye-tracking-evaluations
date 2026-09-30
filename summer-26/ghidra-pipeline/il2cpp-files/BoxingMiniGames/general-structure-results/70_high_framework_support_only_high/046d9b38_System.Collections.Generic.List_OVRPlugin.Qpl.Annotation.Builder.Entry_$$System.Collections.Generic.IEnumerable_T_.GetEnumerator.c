/*
FUNCTION_NAME: System.Collections.Generic.List<OVRPlugin.Qpl.Annotation.Builder.Entry>$$System.Collections.Generic.IEnumerable<T>.GetEnumerator
ENTRY_POINT: 046d9b38
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 82
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;telemetry_or_network_hits_1;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x046d9f90) */
/* WARNING: Removing unreachable block (ram,0x046d9fd8) */

void System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
               (void)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  long *unaff_x22;
  long unaff_x23;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 *in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  long *in_stack_00000078;
  
  FUN_03642964(&DAT_07b691d0);
  *(undefined1 *)(unaff_x23 + 0x7df) = 1;
  in_stack_00000078 = (long *)0x0;
  if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    Newtonsoft_Json_JsonSerializerSettings__set_TypeNameHandling(6,0);
  }
  if (*(uint *)(unaff_x19 + 3) < unaff_w21) {
    FUN_05e39914(0);
  }
  lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    FUN_0367c9fc(lVar6);
  }
  plVar4 = (long *)thunk_FUN_0367fd24();
  if (plVar4 == (long *)0x0) {
    if ((int)unaff_w21 < (int)unaff_x19[3]) {
      if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_0367c9fc(lVar6);
      }
      lVar7 = *unaff_x22;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar6) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_046d9dc8;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_0367cd30();
LAB_046d9dc8:
      plVar4 = (long *)(*(code *)*puVar5)();
      puVar2 = PTR_DAT_079f49a8;
      in_stack_00000038 = &stack0x00000078;
      in_stack_00000030 = 0;
      do {
        in_stack_00000078 = plVar4;
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        lVar6 = *plVar4;
        uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
              puVar5 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_046d9e3c;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_0367cd30(plVar4,*(long *)puVar2,0);
LAB_046d9e3c:
        uVar9 = (*(code *)*puVar5)(plVar4,puVar5[1]);
        plVar4 = in_stack_00000078;
        if ((uVar9 & 1) == 0) {
          if (in_stack_00000078 == (long *)0x0) goto LAB_046d9fac;
          lVar6 = *in_stack_00000078;
          uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar9 == 0) goto LAB_046d9f5c;
          piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          goto LAB_046d9f44;
        }
        if (in_stack_00000078 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_0367c9fc(lVar6);
        }
        lVar7 = *plVar4;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == lVar6) {
              puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_046d9ec0;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_0367cd30(plVar4,lVar6,0);
LAB_046d9ec0:
        (*(code *)*puVar5)(&stack0x00000008,plVar4,puVar5[1]);
        in_stack_00000048 = in_stack_00000010;
        in_stack_00000040 = in_stack_00000008;
        in_stack_00000058 = in_stack_00000020;
        in_stack_00000050 = in_stack_00000018;
        in_stack_00000060 = in_stack_00000028;
        FUN_046d9888();
        plVar4 = in_stack_00000078;
      } while( true );
    }
    FUN_046da8d0();
  }
  else {
    lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0367c9fc(lVar6);
    }
    lVar7 = *plVar4;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar6) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_046d9c84;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_0367cd30(plVar4,lVar6,0);
LAB_046d9c84:
    iVar3 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if (0 < iVar3) {
      FUN_046d8f64();
      iVar1 = (int)unaff_x19[3] - unaff_w21;
      if (iVar1 != 0 && (int)unaff_w21 <= (int)unaff_x19[3]) {
        FUN_05e3b3a4(unaff_x19[2],unaff_w21,unaff_x19[2],iVar3 + unaff_w21,iVar1,0);
      }
      lVar6 = unaff_x19[2];
      if (plVar4 == unaff_x19) {
        FUN_05e3b3a4(lVar6,0,lVar6,unaff_w21,unaff_w21,0);
        FUN_05e3b3a4(unaff_x19[2],iVar3 + unaff_w21,unaff_x19[2],unaff_w21 << 1,
                     (int)unaff_x19[3] - unaff_w21,0);
      }
      else {
        lVar7 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28);
        if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_0367c9fc(lVar7);
        }
        lVar8 = *plVar4;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == lVar7) {
              puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 5) * 0x10 + 0x138);
              goto LAB_046d9d98;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_0367cd30(plVar4,lVar7,5);
LAB_046d9d98:
        (*(code *)*puVar5)(plVar4,lVar6,unaff_w21,puVar5[1]);
      }
      *(int *)(unaff_x19 + 3) = (int)unaff_x19[3] + iVar3;
    }
  }
LAB_046d9fac:
  *(int *)((long)unaff_x19 + 0x1c) = *(int *)((long)unaff_x19 + 0x1c) + 1;
  return;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_046d9f44:
    if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_079f4598) {
      puVar5 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_046d9f78;
    }
  }
LAB_046d9f5c:
  puVar5 = (undefined8 *)FUN_0367cd30(in_stack_00000078,*(long *)PTR_DAT_079f4598,0);
LAB_046d9f78:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
  goto LAB_046d9fac;
}


