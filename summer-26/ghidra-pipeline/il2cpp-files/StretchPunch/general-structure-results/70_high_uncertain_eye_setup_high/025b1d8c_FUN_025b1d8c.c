/*
FUNCTION_NAME: FUN_025b1d8c
ENTRY_POINT: 025b1d8c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_8;ui_or_gameplay_sink_hits_6;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_025b1d8c(undefined1 param_1 [16],undefined8 param_2,long param_3,long param_4,uint param_5,
                 long param_6)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 local_50;
  undefined8 uStack_48;
  
                    /* try { // try from 025b1db0 to 026b1ddb has its CatchHandler @ 025b18f4 */
  if ((DAT_044a39ac & 1) == 0) {
    FUN_01d7d918(StringLiteral_887);
    FUN_01d7d918(
                Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                );
    DAT_044a39ac = 1;
  }
                    /* try { // try from 025b1ddc to 026b1ddf has its CatchHandler @ 025b214c */
  if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033a44fc(3,0);
  }
                    /* try { // try from 025b1de0 to 026b1e17 has its CatchHandler @ 025b18f4 */
  iVar1 = thunk_FUN_01dff4e0(param_4,0);
  if (iVar1 != 1) {
    FUN_033b2d60(7,0);
  }
  iVar1 = thunk_FUN_01dff49c(param_4,0,0);
  if (iVar1 != 0) {
                    /* try { // try from 025b1e18 to 026b1e2f has its CatchHandler @ 025b214c */
    FUN_033b2d60(6,0);
  }
  if ((int)param_5 < 0) {
    OVRManager_PassthroughCapabilities___ctor(0);
  }
  iVar1 = FUN_033aadfc(param_4,0);
                    /* try { // try from 025b1e48 to 026b1e8b has its CatchHandler @ 025b2148 */
  iVar2 = FUN_025b174c(param_3,*(undefined8 *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x68));
  if ((int)(iVar1 - param_5) < iVar2) {
    FUN_033b2d60(5,0);
  }
  lVar5 = *(long *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x38);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01dde7f8(lVar5);
  }
  lVar5 = thunk_FUN_01de26bc(param_4,lVar5);
  if (lVar5 == 0) {
    plVar10 = (long *)thunk_FUN_01dfff04(param_4,0);
    if (plVar10 != (long *)0x0) {
      plVar10 = (long *)(**(code **)(*plVar10 + 0x418))(plVar10,*(undefined8 *)(*plVar10 + 0x420));
      uVar11 = *(undefined8 *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x70);
      if (*(int *)(*(long *)
                    Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                  + 0xe0) == 0) {
                    /* try { // try from 025b1f40 to 026b1f93 has its CatchHandler @ 025b2140 */
        thunk_FUN_01dc4f30(*(long *)
                            Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                          );
      }
      plVar4 = (long *)FUN_033a87c8(uVar11,0);
      if (plVar10 != (long *)0x0) {
        uVar8 = (**(code **)(*plVar10 + 0x288))(plVar10,plVar4,*(undefined8 *)(*plVar10 + 0x290));
        if ((uVar8 & 1) == 0) {
          if (plVar4 == (long *)0x0) goto LAB_025b21a4;
          uVar8 = (**(code **)(*plVar4 + 0x288))(plVar4,plVar10,*(undefined8 *)(*plVar4 + 0x290));
                    /* try { // try from 025b1f94 to 026b211f has its CatchHandler @ 025b18f4 */
          if ((uVar8 & 1) == 0) {
            FUN_033b3618(0);
          }
        }
        plVar10 = (long *)thunk_FUN_01de26bc(param_4,*(undefined8 *)StringLiteral_887);
        if (plVar10 == (long *)0x0) {
          FUN_033b3618();
        }
        plVar4 = *(long **)(param_3 + 0x10);
        if (plVar4 != (long *)0x0) {
          lVar5 = *(long *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x10);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_01dde7f8(lVar5);
          }
          lVar6 = *plVar4;
          uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == lVar5) {
                puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_025b2068;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar3 = (undefined8 *)FUN_01dde8fc(plVar4,lVar5,0);
LAB_025b2068:
          iVar1 = (*(code *)*puVar3)(plVar4,puVar3[1]);
          if (0 < iVar1) {
            iVar2 = 0;
            do {
              plVar4 = *(long **)(param_3 + 0x10);
              if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01d7db70();
              }
              lVar5 = **(long **)(*(long *)(param_6 + 0x20) + 0xc0);
              if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
                lVar5 = FUN_01dde7f8(lVar5);
              }
              lVar6 = *plVar4;
              uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
              if (uVar8 != 0) {
                piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar9 + -2) == lVar5) {
                    puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
                    goto LAB_025b20f4;
                  }
                  uVar8 = uVar8 - 1;
                  piVar9 = piVar9 + 4;
                } while (uVar8 != 0);
              }
              puVar3 = (undefined8 *)FUN_01dde8fc(plVar4,lVar5,0);
LAB_025b20f4:
              local_50 = (*(code *)*puVar3)(plVar4,iVar2,puVar3[1]);
              uStack_48 = param_2;
              lVar5 = thunk_FUN_01de23e8(*(undefined8 *)
                                          (*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x28),
                                         &local_50);
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01d7db70();
              }
              if ((lVar5 != 0) &&
                 (lVar6 = thunk_FUN_01de26bc(lVar5,*(undefined8 *)(*plVar10 + 0x40)), lVar6 == 0)) {
                uVar11 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
                FUN_01d7da3c(uVar11,0);
              }
              if (*(uint *)(plVar10 + 3) <= param_5) {
                    /* WARNING: Subroutine does not return */
                FUN_01d7db78();
              }
              plVar10[(long)(int)param_5 + 4] = lVar5;
              thunk_FUN_01e10808(plVar10 + (long)(int)param_5 + 4,lVar5);
              iVar2 = iVar2 + 1;
              param_5 = param_5 + 1;
            } while (iVar2 != iVar1);
          }
          return;
        }
      }
    }
  }
  else {
    plVar10 = *(long **)(param_3 + 0x10);
                    /* try { // try from 025b1e98 to 026b1eaf has its CatchHandler @ 025b2130 */
    if (plVar10 != (long *)0x0) {
      lVar6 = *(long *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x10);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01dde7f8(lVar6);
      }
      lVar7 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
                    /* try { // try from 025b1ed0 to 026b1f2b has its CatchHandler @ 025b2144 */
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar6) {
            puVar3 = (undefined8 *)(lVar7 + (long)(*piVar9 + 5) * 0x10 + 0x138);
            goto LAB_025b2034;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)FUN_01dde8fc(plVar10,lVar6,5);
LAB_025b2034:
                    /* WARNING: Could not recover jumptable at 0x025b2058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar3)(plVar10,lVar5,param_5,puVar3[1]);
      return;
    }
  }
LAB_025b21a4:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


