/*
FUNCTION_NAME: Meta.XR.EnvironmentRaycastManager$$OnDestroy
ENTRY_POINT: 08a2928c
PROGRAM: Hyper-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentRaycastManager__OnDestroy
               (long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  
  puVar3 = PTR_DAT_0ac525e8;
  puVar2 = PTR_DAT_0ac525e0;
  puVar1 = PTR_DAT_0ac525d0;
  if ((DAT_0b32c329 & 1) == 0) {
    FUN_04947ee4(PTR_DAT_0ac4c7b0);
    FUN_04947ee4(PTR_DAT_0ac525e8);
    FUN_04947ee4(PTR_DAT_0ac525f0);
    FUN_04947ee4(PTR_DAT_0ac525f8);
    FUN_04947ee4(PTR_DAT_0ac52600);
    FUN_04947ee4(PTR_DAT_0ac525d0);
    FUN_04947ee4(PTR_DAT_0ac525e0);
    FUN_04947ee4(PTR_DAT_0ac4c7d8);
    DAT_0b32c329 = 1;
  }
  FUN_08dbf2f0(param_1,0);
  lVar8 = *(long *)puVar1;
  *(undefined4 *)(param_1 + 0x18) = param_4;
  **(undefined8 **)(lVar8 + 0xb8) = param_2;
  thunk_FUN_049ee3d8(*(undefined8 *)(*(long *)puVar1 + 0xb8),param_2);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  thunk_FUN_049ee3d8((undefined8 *)(param_1 + 0x10),param_3);
  plVar4 = (long *)FUN_04947fd0(*(undefined8 *)puVar2,3);
  lVar8 = thunk_FUN_04983f60(*(undefined8 *)puVar3);
  FUN_08dbf2f0(lVar8,0);
  *(long *)(param_1 + 0x50) = lVar8;
  thunk_FUN_049ee3d8((long *)(param_1 + 0x50),lVar8);
  if (plVar4 == (long *)0x0) {
LAB_08a29668:
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  if ((lVar8 != 0) &&
     (lVar5 = thunk_FUN_04983e64(lVar8,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0)) {
LAB_08a29670:
    uVar6 = thunk_FUN_04991a58();
                    /* WARNING: Subroutine does not return */
    FUN_04948050(uVar6,0);
  }
  if ((int)plVar4[3] != 0) {
    plVar4[4] = lVar8;
    thunk_FUN_049ee3d8(plVar4 + 4,lVar8);
    lVar8 = thunk_FUN_04983f60(*(undefined8 *)puVar3);
    FUN_08dbf2f0(lVar8,0);
    *(long *)(param_1 + 0x58) = lVar8;
    thunk_FUN_049ee3d8((long *)(param_1 + 0x58),lVar8);
    if ((lVar8 != 0) &&
       (lVar5 = thunk_FUN_04983e64(lVar8,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
    goto LAB_08a29670;
    if ((*(uint *)(plVar4 + 3) & 0xfffffffe) != 0) {
      plVar4[5] = lVar8;
      thunk_FUN_049ee3d8(plVar4 + 5,lVar8);
      lVar8 = thunk_FUN_04983f60(*(undefined8 *)puVar3);
      FUN_08dbf2f0(lVar8,0);
      *(long *)(param_1 + 0x60) = lVar8;
      thunk_FUN_049ee3d8((long *)(param_1 + 0x60),lVar8);
      if ((lVar8 != 0) &&
         (lVar5 = thunk_FUN_04983e64(lVar8,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
      goto LAB_08a29670;
      puVar2 = PTR_DAT_0ac525f8;
      puVar1 = PTR_DAT_0ac4c7b0;
      if (2 < *(uint *)(plVar4 + 3)) {
        plVar4[6] = lVar8;
        thunk_FUN_049ee3d8(plVar4 + 6,lVar8);
        *(long *)(param_1 + 0x48) = (long)plVar4;
        thunk_FUN_049ee3d8((long *)(param_1 + 0x48),plVar4);
        plVar4 = *(long **)(param_1 + 0x50);
        uVar6 = thunk_FUN_04983f60(*(undefined8 *)puVar1);
        FUN_0633c1f0(uVar6,param_1,*(undefined8 *)puVar2,0);
        puVar3 = PTR_DAT_0ac52600;
        puVar2 = PTR_DAT_0ac4c7d8;
        if (plVar4 != (long *)0x0) {
          lVar8 = *plVar4;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0ac4c7d8) {
                puVar7 = (undefined8 *)(lVar8 + (long)(*piVar10 + 6) * 0x10 + 0x138);
                goto LAB_08a2952c;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar7 = (undefined8 *)FUN_04980e68(plVar4,*(long *)PTR_DAT_0ac4c7d8,6);
LAB_08a2952c:
          (*(code *)*puVar7)(plVar4,uVar6,puVar7[1]);
          plVar4 = *(long **)(param_1 + 0x58);
          uVar6 = thunk_FUN_04983f60(*(undefined8 *)puVar1);
          FUN_0633c1f0(uVar6,param_1,*(undefined8 *)puVar3,0);
          puVar3 = PTR_DAT_0ac525f0;
          if (plVar4 != (long *)0x0) {
            lVar5 = *plVar4;
            uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
            lVar8 = *(long *)puVar2;
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == lVar8) {
                  puVar7 = (undefined8 *)(lVar5 + (long)(*piVar10 + 6) * 0x10 + 0x138);
                  goto LAB_08a295b8;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar7 = (undefined8 *)FUN_04980e68(plVar4,lVar8,6);
LAB_08a295b8:
            (*(code *)*puVar7)(plVar4,uVar6,puVar7[1]);
            plVar4 = *(long **)(param_1 + 0x60);
            uVar6 = thunk_FUN_04983f60(*(undefined8 *)puVar1);
            FUN_0633c1f0(uVar6,param_1,*(undefined8 *)puVar3,0);
            if (plVar4 != (long *)0x0) {
              lVar5 = *plVar4;
              lVar8 = *(long *)puVar2;
              uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
              if (uVar9 != 0) {
                piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == lVar8) {
                    puVar7 = (undefined8 *)(lVar5 + (long)(*piVar10 + 6) * 0x10 + 0x138);
                    goto LAB_08a2963c;
                  }
                  uVar9 = uVar9 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar9 != 0);
              }
              puVar7 = (undefined8 *)FUN_04980e68(plVar4,lVar8,6);
LAB_08a2963c:
              (*(code *)*puVar7)(plVar4,uVar6,puVar7[1]);
              FUN_08a2967c(param_1);
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


