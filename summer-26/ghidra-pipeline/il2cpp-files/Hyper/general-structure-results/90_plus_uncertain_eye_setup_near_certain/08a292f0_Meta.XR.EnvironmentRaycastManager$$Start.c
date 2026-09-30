/*
FUNCTION_NAME: Meta.XR.EnvironmentRaycastManager$$Start
ENTRY_POINT: 08a292f0
PROGRAM: Hyper-libil2cpp.so
SCORE: 98
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ray_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentRaycastManager__Start(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined4 unaff_w22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  long *unaff_x25;
  long unaff_x26;
  
  FUN_04947ee4(*(undefined8 *)(param_1 + 0x5f8));
  FUN_04947ee4(PTR_DAT_0ac52600);
  FUN_04947ee4(PTR_DAT_0ac525d0);
  FUN_04947ee4(PTR_DAT_0ac525e0);
  FUN_04947ee4(PTR_DAT_0ac4c7d8);
  *(undefined1 *)(unaff_x26 + 0x329) = 1;
  FUN_08dbf2f0();
  lVar7 = *unaff_x25;
  *(undefined4 *)(unaff_x19 + 0x18) = unaff_w22;
  **(undefined8 **)(lVar7 + 0xb8) = unaff_x21;
  thunk_FUN_049ee3d8(*(undefined8 *)(*unaff_x25 + 0xb8));
  *(undefined8 *)(unaff_x19 + 0x10) = unaff_x20;
  thunk_FUN_049ee3d8();
  plVar3 = (long *)FUN_04947fd0(*unaff_x24,3);
  lVar7 = thunk_FUN_04983f60(*unaff_x23);
  FUN_08dbf2f0(lVar7,0);
  *(long *)(unaff_x19 + 0x50) = lVar7;
  thunk_FUN_049ee3d8((long *)(unaff_x19 + 0x50),lVar7);
  if (plVar3 == (long *)0x0) {
LAB_08a29668:
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  if ((lVar7 != 0) &&
     (lVar4 = thunk_FUN_04983e64(lVar7,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0)) {
LAB_08a29670:
    uVar5 = thunk_FUN_04991a58();
                    /* WARNING: Subroutine does not return */
    FUN_04948050(uVar5,0);
  }
  if ((int)plVar3[3] != 0) {
    plVar3[4] = lVar7;
    thunk_FUN_049ee3d8(plVar3 + 4,lVar7);
    lVar7 = thunk_FUN_04983f60(*unaff_x23);
    FUN_08dbf2f0(lVar7,0);
    *(long *)(unaff_x19 + 0x58) = lVar7;
    thunk_FUN_049ee3d8((long *)(unaff_x19 + 0x58),lVar7);
    if ((lVar7 != 0) &&
       (lVar4 = thunk_FUN_04983e64(lVar7,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
    goto LAB_08a29670;
    if ((*(uint *)(plVar3 + 3) & 0xfffffffe) != 0) {
      plVar3[5] = lVar7;
      thunk_FUN_049ee3d8(plVar3 + 5,lVar7);
      lVar7 = thunk_FUN_04983f60(*unaff_x23);
      FUN_08dbf2f0(lVar7,0);
      *(long *)(unaff_x19 + 0x60) = lVar7;
      thunk_FUN_049ee3d8((long *)(unaff_x19 + 0x60),lVar7);
      if ((lVar7 != 0) &&
         (lVar4 = thunk_FUN_04983e64(lVar7,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
      goto LAB_08a29670;
      puVar1 = PTR_DAT_0ac4c7b0;
      if (2 < *(uint *)(plVar3 + 3)) {
        plVar3[6] = lVar7;
        thunk_FUN_049ee3d8(plVar3 + 6,lVar7);
        *(long *)(unaff_x19 + 0x48) = (long)plVar3;
        thunk_FUN_049ee3d8((long *)(unaff_x19 + 0x48),plVar3);
        plVar3 = *(long **)(unaff_x19 + 0x50);
        uVar5 = thunk_FUN_04983f60(*(undefined8 *)puVar1);
        FUN_0633c1f0();
        puVar2 = PTR_DAT_0ac4c7d8;
        if (plVar3 != (long *)0x0) {
          lVar7 = *plVar3;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0ac4c7d8) {
                puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 6) * 0x10 + 0x138);
                goto LAB_08a2952c;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar6 = (undefined8 *)FUN_04980e68(plVar3,*(long *)PTR_DAT_0ac4c7d8,6);
LAB_08a2952c:
          (*(code *)*puVar6)(plVar3,uVar5,puVar6[1]);
          plVar3 = *(long **)(unaff_x19 + 0x58);
          uVar5 = thunk_FUN_04983f60(*(undefined8 *)puVar1);
          FUN_0633c1f0();
          if (plVar3 != (long *)0x0) {
            lVar4 = *plVar3;
            uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
            lVar7 = *(long *)puVar2;
            if (uVar8 != 0) {
              piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == lVar7) {
                  puVar6 = (undefined8 *)(lVar4 + (long)(*piVar9 + 6) * 0x10 + 0x138);
                  goto LAB_08a295b8;
                }
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar8 != 0);
            }
            puVar6 = (undefined8 *)FUN_04980e68(plVar3,lVar7,6);
LAB_08a295b8:
            (*(code *)*puVar6)(plVar3,uVar5,puVar6[1]);
            plVar3 = *(long **)(unaff_x19 + 0x60);
            uVar5 = thunk_FUN_04983f60(*(undefined8 *)puVar1);
            FUN_0633c1f0();
            if (plVar3 != (long *)0x0) {
              lVar4 = *plVar3;
              lVar7 = *(long *)puVar2;
              uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
              if (uVar8 != 0) {
                piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar9 + -2) == lVar7) {
                    puVar6 = (undefined8 *)(lVar4 + (long)(*piVar9 + 6) * 0x10 + 0x138);
                    goto LAB_08a2963c;
                  }
                  uVar8 = uVar8 - 1;
                  piVar9 = piVar9 + 4;
                } while (uVar8 != 0);
              }
              puVar6 = (undefined8 *)FUN_04980e68(plVar3,lVar7,6);
LAB_08a2963c:
              (*(code *)*puVar6)(plVar3,uVar5,puVar6[1]);
              FUN_08a2967c();
              return;
            }
          }
        }
        goto LAB_08a29668;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04948194();
}


