/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.VirtualKeyboardModelAnimationState>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 05831bfc
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_VirtualKeyboardModelAnimationState>__System_Collections_IEnumerator_get_Current
               (void)

{
  ushort uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  code *pcVar8;
  int *piVar9;
  long unaff_x19;
  size_t unaff_x21;
  void *unaff_x22;
  undefined8 *unaff_x23;
  long *unaff_x24;
  undefined8 uVar10;
  long unaff_x26;
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -0x20) = 0;
  if (unaff_x24 == (long *)0x0) {
    if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
  }
  else {
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_040b1acc();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x18);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_040b1acc(lVar3);
    }
    lVar6 = *unaff_x24;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar3) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_05831c80;
        }
                    /* try { // try from 05831c58 to 05931cbb has its CatchHandler @ 05831c58
                       catch() { ... } // from try @ 05831c58 with catch @ 05831c58
                       catch() { ... } // from try @ 05831d78 with catch @ 05831c58
                       catch() { ... } // from try @ 05831dd4 with catch @ 05831c58
                       catch() { ... } // from try @ 05831e10 with catch @ 05831c58 */
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_040b1e00();
LAB_05831c80:
    plVar5 = (long *)(*(code *)*puVar4)();
    *(long **)(unaff_x29 + -0x20) = plVar5;
    *(undefined8 *)(unaff_x29 + -0x30) = 0;
    *(long *)(unaff_x29 + -0x28) = unaff_x29 + -0x20;
    puVar2 = PTR_DAT_092860c8;
    while (plVar5 != (long *)0x0) {
      lVar3 = *plVar5;
      uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar7 != 0) {
        piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
            puVar4 = (undefined8 *)(lVar3 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_05831cf4;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_040b1e00(plVar5,*(long *)puVar2,0);
LAB_05831cf4:
      uVar7 = (*(code *)*puVar4)(plVar5,puVar4[1]);
      if ((uVar7 & 1) == 0) {
        plVar5 = (long *)**(undefined8 **)(unaff_x29 + -0x28);
        if (plVar5 == (long *)0x0) goto LAB_05831f34;
        lVar3 = *plVar5;
        uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar7 == 0) goto LAB_05831f0c;
        piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        goto LAB_05831ef4;
      }
      plVar5 = *(long **)(unaff_x29 + -0x20);
      if (plVar5 == (long *)0x0) {
        if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        goto LAB_05831fa4;
      }
      lVar3 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_040b1acc();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x38);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_040b1acc(lVar3);
      }
      lVar6 = *plVar5;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar3) {
            lVar3 = lVar6 + (long)*piVar9 * 0x10 + 0x138;
            goto LAB_05831d88;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar7 != 0);
      }
      lVar3 = FUN_040b1e00(plVar5,lVar3,0);
LAB_05831d88:
      lVar3 = *(long *)(lVar3 + 8);
      *(void **)(unaff_x29 + -0x18) = unaff_x22;
      (**(code **)(lVar3 + 0x10))(*(undefined8 *)(lVar3 + 8),lVar3,plVar5,unaff_x29 + -0x18);
      memcpy(unaff_x23,unaff_x22,unaff_x21);
      lVar6 = *(long *)(unaff_x19 + 0x20);
      uVar1 = *(ushort *)(lVar6 + 0x135);
      lVar3 = lVar6;
      if ((uVar1 & 1) == 0) {
        lVar3 = FUN_040b1acc();
        lVar6 = *(long *)(unaff_x19 + 0x20);
        uVar1 = *(ushort *)(lVar6 + 0x135);
      }
      uVar10 = **(undefined8 **)(*(long *)(lVar3 + 0xc0) + 0xb0);
      lVar3 = lVar6;
      if ((uVar1 & 1) == 0) {
        lVar3 = FUN_040b1acc();
        lVar6 = *(long *)(unaff_x19 + 0x20);
        uVar1 = *(ushort *)(lVar6 + 0x135);
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0xb0);
      if ((uVar1 & 1) == 0) {
        lVar6 = FUN_040b1acc();
      }
      puVar4 = unaff_x23;
      if (-1 < *(int *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x10) + 0x28)) {
        puVar4 = (undefined8 *)*unaff_x23;
      }
      pcVar8 = *(code **)(lVar3 + 0x10);
      *(undefined8 **)(unaff_x29 + -0x18) = puVar4;
      (*pcVar8)(uVar10,lVar3);
      plVar5 = *(long **)(unaff_x29 + -0x20);
    }
    if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
  }
  goto LAB_05831fa4;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar9 = piVar9 + 4;
    if (uVar7 == 0) break;
LAB_05831ef4:
    if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_092860c0) {
      puVar4 = (undefined8 *)(lVar3 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_05831f28;
    }
  }
LAB_05831f0c:
  puVar4 = (undefined8 *)FUN_040b1e00(plVar5,*(long *)PTR_DAT_092860c0,0);
LAB_05831f28:
  (*(code *)*puVar4)(plVar5,puVar4[1]);
LAB_05831f34:
  if (*(long *)(unaff_x29 + -0x30) == 0) {
    if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
      return;
    }
  }
  else if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    FUN_04077828();
  }
LAB_05831fa4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


