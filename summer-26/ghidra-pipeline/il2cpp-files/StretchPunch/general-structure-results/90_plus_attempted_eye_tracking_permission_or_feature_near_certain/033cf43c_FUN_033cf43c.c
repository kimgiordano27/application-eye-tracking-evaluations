/*
FUNCTION_NAME: FUN_033cf43c
ENTRY_POINT: 033cf43c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 124
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_8;ui_or_gameplay_sink_hits_4;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup
*/


undefined8 FUN_033cf43c(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  
  if ((DAT_044a6a17 & 1) == 0) {
    FUN_01d7d918(StringLiteral_5456);
    FUN_01d7d918(StringLiteral_1157);
    FUN_01d7d918(StringLiteral_1291);
    FUN_01d7d918(
                Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                );
    DAT_044a6a17 = 1;
  }
  if (param_2 != 0) {
    plVar3 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_5456,*(undefined4 *)(param_2 + 0x18))
    ;
    uVar4 = (**(code **)(*param_1 + 0x3b8))(param_1,*(undefined8 *)(*param_1 + 0x3c0));
    if ((uVar4 & 1) == 0) {
      uVar7 = thunk_FUN_01dd295c(StringLiteral_887);
      uVar7 = FUN_01d7d9bc(uVar7,1);
      FUN_01a94b18();
      FUN_01a952f4(uVar7,param_1);
      FUN_01a95328(uVar7,0,param_1);
      uVar8 = thunk_FUN_01dd295c(StringLiteral_8947);
      uVar7 = FUN_033d6e50(uVar8,uVar7,0);
      thunk_FUN_01dd295c(StringLiteral_1244);
      uVar8 = thunk_FUN_01de27b8();
      FUN_03393770(uVar8,uVar7,0);
    }
    else {
      lVar5 = (**(code **)(*param_1 + 0x458))(param_1,*(undefined8 *)(*param_1 + 0x460));
      puVar2 = StringLiteral_1157;
      puVar1 = 
      Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material;
      if (lVar5 == 0) goto LAB_033cf798;
      iVar10 = (int)*(ulong *)(lVar5 + 0x18);
      if (iVar10 == *(int *)(param_2 + 0x18)) {
        if (0 < iVar10) {
          uVar4 = 0;
          uVar11 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
          lVar5 = 0x20;
          do {
            if (uVar11 <= uVar4) goto LAB_033cf794;
            plVar12 = *(long **)(param_2 + lVar5);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
            }
            uVar11 = FUN_033aa3b4(plVar12,0,0);
            if ((uVar11 & 1) != 0) {
              thunk_FUN_01dd295c(StringLiteral_1111);
              uVar7 = thunk_FUN_01de27b8();
              FUN_0328ec88(uVar7,0);
              goto LAB_033cf7c4;
            }
            lVar6 = *(long *)puVar2;
            if (plVar12 == (long *)0x0) {
OVRPlugin__StartEyeTracking:
              plVar13 = (long *)0x0;
            }
            else {
              if (*(byte *)(*plVar12 + 0x130) < *(byte *)(lVar6 + 0x130))
              goto OVRPlugin__StartEyeTracking;
              plVar13 = plVar12;
              if (*(long *)(*(long *)(*plVar12 + 200) + (ulong)*(byte *)(lVar6 + 0x130) * 8 + -8) !=
                  lVar6) {
                plVar13 = (long *)0x0;
              }
            }
            if (*(int *)(lVar6 + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
            }
            if (plVar13 == (long *)0x0) {
              if (plVar12 == (long *)0x0) goto LAB_033cf798;
              uVar4 = (**(code **)(*plVar12 + 0x608))(plVar12,*(undefined8 *)(*plVar12 + 0x610));
              if ((uVar4 & 1) != 0) {
                if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                  thunk_FUN_01dc4f30();
                }
                uVar7 = FUN_033ad404(param_1,param_2,0);
                return uVar7;
              }
              plVar3 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_1291,
                                            *(undefined4 *)(param_2 + 0x18));
              if ((int)*(ulong *)(param_2 + 0x18) < 1) goto LAB_033cf73c;
              uVar4 = 0;
              uVar11 = *(ulong *)(param_2 + 0x18) & 0xffffffff;
              plVar12 = plVar3 + 4;
              goto LAB_033cf6e0;
            }
            if (plVar3 == (long *)0x0) goto LAB_033cf798;
            lVar6 = thunk_FUN_01de26bc(plVar13,*(undefined8 *)(*plVar3 + 0x40));
            if (lVar6 == 0) goto LAB_033cf79c;
            if (*(uint *)(plVar3 + 3) <= uVar4) goto LAB_033cf794;
            *(undefined8 *)((long)plVar3 + lVar5) = plVar13;
            thunk_FUN_01e10808((undefined8 *)((long)plVar3 + lVar5),plVar13);
            uVar11 = (ulong)*(uint *)(param_2 + 0x18);
            uVar4 = uVar4 + 1;
            lVar5 = lVar5 + 8;
          } while ((long)uVar4 < (long)(int)*(uint *)(param_2 + 0x18));
        }
        uVar7 = FUN_033cf324(param_1);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01dc4f30(*(long *)puVar2);
        }
        FUN_033ca2c8(plVar3,uVar7);
        uVar7 = FUN_01d6ee30(param_1,plVar3);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01dc4f30(*(long *)puVar1);
        }
        uVar4 = FUN_033aa3b4(uVar7,0,0);
        if ((uVar4 & 1) == 0) {
          return uVar7;
        }
        thunk_FUN_01dd295c(StringLiteral_5743);
        uVar7 = thunk_FUN_01de27b8();
        FUN_033cf92c();
        goto LAB_033cf7c4;
      }
      uVar7 = thunk_FUN_01dd295c(StringLiteral_8948);
      uVar7 = FUN_033d6e4c(uVar7,0);
      thunk_FUN_01dd295c(StringLiteral_1149);
      uVar8 = thunk_FUN_01de27b8();
      uVar9 = thunk_FUN_01dd295c(StringLiteral_8946);
      FUN_03287130(uVar8,uVar7,uVar9,0);
    }
    uVar7 = thunk_FUN_01dd295c(StringLiteral_8945);
                    /* WARNING: Subroutine does not return */
    FUN_01d7da3c(uVar8,uVar7);
  }
  thunk_FUN_01dd295c(StringLiteral_1111);
  uVar7 = thunk_FUN_01de27b8();
  uVar8 = thunk_FUN_01dd295c(StringLiteral_8946);
  FUN_032870b8(uVar7,uVar8,0);
  goto LAB_033cf7c4;
LAB_033cf6e0:
  do {
    if (uVar11 <= uVar4) {
LAB_033cf794:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db78();
    }
    if (plVar3 == (long *)0x0) goto LAB_033cf798;
    lVar5 = *(long *)(param_2 + 0x20 + uVar4 * 8);
    if ((lVar5 != 0) &&
       (lVar6 = thunk_FUN_01de26bc(lVar5,*(undefined8 *)(*plVar3 + 0x40)), lVar6 == 0)) {
LAB_033cf79c:
      uVar7 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
      FUN_01d7da3c(uVar7,0);
    }
    if (*(uint *)(plVar3 + 3) <= uVar4) goto LAB_033cf794;
    *plVar12 = lVar5;
    thunk_FUN_01e10808(plVar12,lVar5);
    uVar11 = (ulong)*(uint *)(param_2 + 0x18);
    uVar4 = uVar4 + 1;
    plVar12 = plVar12 + 1;
  } while ((long)uVar4 < (long)(int)*(uint *)(param_2 + 0x18));
LAB_033cf73c:
  uVar4 = FUN_032fcd14(0);
  if ((uVar4 & 1) != 0) {
    lVar5 = *(long *)puVar2;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
      lVar5 = *(long *)puVar2;
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x30);
    if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x033cf790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar7 = (**(code **)(lVar5 + 0x18))
                        (*(undefined8 *)(lVar5 + 0x40),param_1,plVar3,*(undefined8 *)(lVar5 + 0x28))
      ;
      return uVar7;
    }
LAB_033cf798:
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  thunk_FUN_01dd295c(StringLiteral_2940);
  uVar7 = thunk_FUN_01de27b8();
  FUN_033a33d0(uVar7,0);
LAB_033cf7c4:
  uVar8 = thunk_FUN_01dd295c(StringLiteral_8945);
                    /* WARNING: Subroutine does not return */
  FUN_01d7da3c(uVar7,uVar8);
}


