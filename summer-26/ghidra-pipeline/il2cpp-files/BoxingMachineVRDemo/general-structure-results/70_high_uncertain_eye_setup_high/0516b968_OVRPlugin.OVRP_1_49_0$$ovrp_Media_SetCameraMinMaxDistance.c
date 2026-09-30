/*
FUNCTION_NAME: OVRPlugin.OVRP_1_49_0$$ovrp_Media_SetCameraMinMaxDistance
ENTRY_POINT: 0516b968
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 76
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;weak_pose_support
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;weak_vector_component_hits_1;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0516bdf8) */
/* WARNING: Removing unreachable block (ram,0x0516bec8) */

void OVRPlugin_OVRP_1_49_0__ovrp_Media_SetCameraMinMaxDistance
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  ulong in_x9;
  int *in_x10;
  int *piVar5;
  long in_x11;
  long unaff_x19;
  long *unaff_x20;
  long *plVar6;
  long *unaff_x23;
  long *unaff_x24;
  long unaff_x25;
  
  do {
    if (in_x11 == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_0516b998;
    }
    in_x9 = in_x9 - 1;
    in_x10 = in_x10 + 4;
    if (in_x9 == 0) {
      do {
        puVar1 = (undefined8 *)FUN_02d9a5d4();
LAB_0516b998:
        uVar2 = (*(code *)*puVar1)();
        if ((uVar2 & 1) == 0) {
          if (unaff_x20 == (long *)0x0) goto LAB_0516bdc4;
          lVar4 = *unaff_x20;
          uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar2 == 0) goto LAB_0516bcf0;
          piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          goto LAB_0516bcd8;
        }
        lVar4 = *unaff_x20;
        uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar2 != 0) {
          piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == *unaff_x24) {
              puVar1 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
              goto LAB_0516b9f4;
            }
            uVar2 = uVar2 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar2 != 0);
        }
        puVar1 = (undefined8 *)FUN_02d9a5d4();
LAB_0516b9f4:
        lVar4 = (*(code *)*puVar1)();
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        plVar3 = *(long **)(lVar4 + 0x18);
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        plVar6 = *(long **)(unaff_x19 + 0x10);
        uVar2 = (**(code **)(*plVar3 + 0x178))(plVar3,*(undefined8 *)(*plVar3 + 0x180));
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8(uVar2,uVar2 & 0xffffffff);
        }
        (**(code **)(*plVar6 + 0x1d8))(plVar6,uVar2 & 0xffffffff,*(undefined8 *)(*plVar6 + 0x1e0));
        lVar4 = *(long *)(lVar4 + 0x10);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        plVar3 = *(long **)(lVar4 + 0x20);
        if ((plVar3 != (long *)0x0) && (*plVar3 != *(long *)(unaff_x25 + 0x90))) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60e88(plVar3,*(long *)(unaff_x25 + 0x90),*(undefined4 *)(lVar4 + 0x2c));
        }
        FUN_0516c1e8();
        FUN_0516b2a4();
        param_1 = *unaff_x20;
        param_3 = *unaff_x23;
        in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
      } while (in_x9 == 0);
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    }
    in_x11 = *(long *)(in_x10 + -2);
  } while( true );
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar5 = piVar5 + 4;
    if (uVar2 == 0) break;
LAB_0516bcd8:
    if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_0675f3d0) {
      puVar1 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_0516bdb8;
    }
  }
LAB_0516bcf0:
  puVar1 = (undefined8 *)FUN_02d9a5d4();
LAB_0516bdb8:
  (*(code *)*puVar1)();
LAB_0516bdc4:
  plVar3 = *(long **)(unaff_x19 + 0x10);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x1c8))(plVar3,0,*(undefined8 *)(*plVar3 + 0x1d0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


