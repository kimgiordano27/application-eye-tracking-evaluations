/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_media_stream_updated_t_session_handle_get
ENTRY_POINT: 085457f4
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_11;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x08545b70) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_media_stream_updated_t_session_handle_get
               (void)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar9;
  long lVar10;
  undefined8 unaff_x22;
  long unaff_x24;
  undefined1 auVar11 [12];
  long in_stack_00000010;
  undefined8 in_stack_00000020;
  
  plVar2 = (long *)FUN_05189930();
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
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar5 = *plVar2;
  uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_09327080) {
        puVar3 = (undefined8 *)(lVar5 + (long)(*piVar8 + 4) * 0x10 + 0x138);
        goto LAB_085458e0;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_040b1e00(plVar2,*(long *)PTR_DAT_09327080,4);
LAB_085458e0:
  (*(code *)*puVar3)(plVar2,in_stack_00000010 + 0x18,2,puVar3[1]);
  if (in_stack_00000010 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar6 = *plVar2;
  lVar5 = *(long *)puVar1;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar5) {
        puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_08545950;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_040b1e00(plVar2,lVar5,0);
LAB_08545950:
  (*(code *)*puVar3)(plVar2,in_stack_00000010 + 0x2c,1,puVar3[1]);
  if (in_stack_00000010 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar6 = *plVar2;
  lVar5 = *(long *)puVar1;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar5) {
        puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_085459c0;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_040b1e00(plVar2,lVar5,0);
LAB_085459c0:
  (*(code *)*puVar3)(plVar2,in_stack_00000010 + 0x3c,1,puVar3[1]);
  puVar1 = PTR_DAT_0932e230;
  lVar5 = *(long *)PTR_DAT_0932e230;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar5 = *(long *)puVar1;
  }
  puVar3 = *(undefined8 **)(lVar5 + 0xb8);
  lVar6 = puVar3[1];
  if (lVar6 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      puVar3 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
    }
    uVar9 = *puVar3;
    lVar6 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0932e210);
    FUN_06ac8788(lVar6,uVar9,*(undefined8 *)PTR_DAT_0932e228,0);
    plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
    *plVar4 = lVar6;
    thunk_FUN_040ec700(plVar4,lVar6);
  }
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar5 = *plVar2;
  lVar10 = *(long *)PTR_DAT_0932e218;
  uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)(lVar10 + 0x20)) {
        lVar5 = lVar5 + (long)(int)(*piVar8 + (uint)*(ushort *)(lVar10 + 0x50)) * 0x10 + 0x138;
        goto LAB_08545ab8;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  lVar5 = FUN_040b1e00(plVar2);
LAB_08545ab8:
  lVar5 = thunk_FUN_04096bb4(*(undefined8 *)(lVar5 + 8),lVar10);
  (**(code **)(lVar5 + 8))(plVar2,lVar6,lVar5);
  if (plVar2 != (long *)0x0) {
    lVar5 = *plVar2;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_092860c0) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_08545b3c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_040b1e00(plVar2,*(long *)PTR_DAT_092860c0,0);
LAB_08545b3c:
    (*(code *)*puVar3)(plVar2,puVar3[1]);
  }
  return;
}


