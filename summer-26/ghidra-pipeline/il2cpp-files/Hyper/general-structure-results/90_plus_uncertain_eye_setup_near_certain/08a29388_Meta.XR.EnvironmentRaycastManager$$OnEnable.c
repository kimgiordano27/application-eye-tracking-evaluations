/*
FUNCTION_NAME: Meta.XR.EnvironmentRaycastManager$$OnEnable
ENTRY_POINT: 08a29388
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


void Meta_XR_EnvironmentRaycastManager__OnEnable(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long *unaff_x20;
  long *plVar9;
  undefined8 *unaff_x23;
  
  FUN_08dbf2f0(param_1,0);
  *(long *)(unaff_x19 + 0x50) = param_1;
  thunk_FUN_049ee3d8((long *)(unaff_x19 + 0x50),param_1);
  if (unaff_x20 == (long *)0x0) {
LAB_08a29668:
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  if ((param_1 != 0) &&
     (lVar3 = thunk_FUN_04983e64(param_1,*(undefined8 *)(*unaff_x20 + 0x40)), lVar3 == 0)) {
LAB_08a29670:
    uVar5 = thunk_FUN_04991a58();
                    /* WARNING: Subroutine does not return */
    FUN_04948050(uVar5,0);
  }
  if ((int)unaff_x20[3] != 0) {
    unaff_x20[4] = param_1;
    thunk_FUN_049ee3d8(unaff_x20 + 4,param_1);
    lVar3 = thunk_FUN_04983f60(*unaff_x23);
    FUN_08dbf2f0(lVar3,0);
    *(long *)(unaff_x19 + 0x58) = lVar3;
    thunk_FUN_049ee3d8((long *)(unaff_x19 + 0x58),lVar3);
    if ((lVar3 != 0) &&
       (lVar4 = thunk_FUN_04983e64(lVar3,*(undefined8 *)(*unaff_x20 + 0x40)), lVar4 == 0))
    goto LAB_08a29670;
    if ((*(uint *)(unaff_x20 + 3) & 0xfffffffe) != 0) {
      unaff_x20[5] = lVar3;
      thunk_FUN_049ee3d8(unaff_x20 + 5,lVar3);
      lVar3 = thunk_FUN_04983f60(*unaff_x23);
      FUN_08dbf2f0(lVar3,0);
      *(long *)(unaff_x19 + 0x60) = lVar3;
      thunk_FUN_049ee3d8((long *)(unaff_x19 + 0x60),lVar3);
      if ((lVar3 != 0) &&
         (lVar4 = thunk_FUN_04983e64(lVar3,*(undefined8 *)(*unaff_x20 + 0x40)), lVar4 == 0))
      goto LAB_08a29670;
      puVar1 = PTR_DAT_0ac4c7b0;
      if (2 < *(uint *)(unaff_x20 + 3)) {
        unaff_x20[6] = lVar3;
        thunk_FUN_049ee3d8(unaff_x20 + 6,lVar3);
        *(long **)(unaff_x19 + 0x48) = unaff_x20;
        thunk_FUN_049ee3d8();
        plVar9 = *(long **)(unaff_x19 + 0x50);
        uVar5 = thunk_FUN_04983f60(*(undefined8 *)puVar1);
        FUN_0633c1f0();
        puVar2 = PTR_DAT_0ac4c7d8;
        if (plVar9 != (long *)0x0) {
          lVar3 = *plVar9;
          uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0ac4c7d8) {
                puVar6 = (undefined8 *)(lVar3 + (long)(*piVar8 + 6) * 0x10 + 0x138);
                goto LAB_08a2952c;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar6 = (undefined8 *)FUN_04980e68(plVar9,*(long *)PTR_DAT_0ac4c7d8,6);
LAB_08a2952c:
          (*(code *)*puVar6)(plVar9,uVar5,puVar6[1]);
          plVar9 = *(long **)(unaff_x19 + 0x58);
          uVar5 = thunk_FUN_04983f60(*(undefined8 *)puVar1);
          FUN_0633c1f0();
          if (plVar9 != (long *)0x0) {
            lVar4 = *plVar9;
            uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
            lVar3 = *(long *)puVar2;
            if (uVar7 != 0) {
              piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == lVar3) {
                  puVar6 = (undefined8 *)(lVar4 + (long)(*piVar8 + 6) * 0x10 + 0x138);
                  goto LAB_08a295b8;
                }
                uVar7 = uVar7 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar7 != 0);
            }
            puVar6 = (undefined8 *)FUN_04980e68(plVar9,lVar3,6);
LAB_08a295b8:
            (*(code *)*puVar6)(plVar9,uVar5,puVar6[1]);
            plVar9 = *(long **)(unaff_x19 + 0x60);
            uVar5 = thunk_FUN_04983f60(*(undefined8 *)puVar1);
            FUN_0633c1f0();
            if (plVar9 != (long *)0x0) {
              lVar4 = *plVar9;
              lVar3 = *(long *)puVar2;
              uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
              if (uVar7 != 0) {
                piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar8 + -2) == lVar3) {
                    puVar6 = (undefined8 *)(lVar4 + (long)(*piVar8 + 6) * 0x10 + 0x138);
                    goto LAB_08a2963c;
                  }
                  uVar7 = uVar7 - 1;
                  piVar8 = piVar8 + 4;
                } while (uVar7 != 0);
              }
              puVar6 = (undefined8 *)FUN_04980e68(plVar9,lVar3,6);
LAB_08a2963c:
              (*(code *)*puVar6)(plVar9,uVar5,puVar6[1]);
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


