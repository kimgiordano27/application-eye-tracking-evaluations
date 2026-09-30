/*
FUNCTION_NAME: UniRx.ReactiveProperty<Vector3>$$set_Value
ENTRY_POINT: 04afc090
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void UniRx_ReactiveProperty<Vector3>__set_Value(void)

{
  undefined2 uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  ulong unaff_x22;
  
  memcpy(&stack0x00000008,&stack0x000000a0,0x68);
  if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_0367c9fc();
  }
  memcpy(&stack0x00000108,&stack0x00000008,0x68);
  FUN_04afbec8();
  if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  uVar3 = (**(code **)(*unaff_x21 + 0x178))();
  if ((uVar3 & 1) != 0) {
    iVar2 = (**(code **)(*unaff_x21 + 0x188))();
    if (0 < iVar2) {
      uVar3 = 0;
      do {
        if ((unaff_x22 & 0xffffffff) == uVar3) {
LAB_04afc1b4:
                    /* WARNING: Subroutine does not return */
          FUN_03642c20();
        }
        lVar4 = *(long *)(unaff_x19 + 0x20);
        uVar1 = *(undefined2 *)(unaff_x20 + uVar3 * 2);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_0367c9fc();
        }
        uVar5 = FUN_04ad618c(uVar1,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x50));
        if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
          FUN_0367c9fc(*(long *)(unaff_x19 + 0x20));
        }
        lVar4 = unaff_x21[0x10];
        if (lVar4 != 0) {
          if (*(uint *)(lVar4 + 0x18) <= uVar3) goto LAB_04afc1b4;
          *(undefined8 *)(lVar4 + uVar3 * 8 + 0x20) = uVar5;
        }
        uVar3 = uVar3 + 1;
        iVar2 = (**(code **)(*unaff_x21 + 0x188))();
      } while ((long)uVar3 < (long)iVar2);
    }
  }
  return;
}


