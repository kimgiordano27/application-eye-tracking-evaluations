/*
FUNCTION_NAME: FUN_02785af0
ENTRY_POINT: 02785af0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_3;telemetry_or_network_hits_3;functionality_data_collection_or_telemetry_hits_3
*/


void FUN_02785af0(undefined1 param_1 [16],float param_2,float param_3,float param_4,long param_5)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  undefined1 auStack_268 [184];
  undefined4 local_1b0;
  float fStack_1ac;
  float local_1a8;
  float fStack_1a4;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined4 local_190;
  float fStack_18c;
  float local_188;
  float fStack_184;
  undefined4 local_180;
  float fStack_17c;
  float local_178;
  float fStack_174;
  undefined4 local_170;
  float local_16c;
  float local_168;
  float local_164;
  undefined4 local_160;
  float local_15c;
  float local_158;
  float local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined1 auStack_f8 [112];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [48];
  undefined8 local_40;
  undefined8 local_38;
  
  if ((DAT_03788671 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractorAffordanceStateProvider_<ClickAnimation>d__96_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_00d48444(StringLiteral_4493);
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<ARSessionOrigin>_TryFindComponent__
                      );
    DAT_03788671 = 1;
  }
  local_38 = 0;
  local_40 = 0;
  memset(auStack_f8,0,0xb8);
  memset(&local_1b0,0,0xb8);
  if (*(long *)(param_5 + 0x160) == 0) goto LAB_02786460;
  uVar8 = FUN_02748ec4(*(long *)(param_5 + 0x160),0);
  local_40 = CONCAT44(param_2,uVar8);
  local_38 = CONCAT44(param_4,param_3);
  fVar9 = (float)FUN_026884c4(&local_40,0);
  fVar10 = DAT_028ab0b0;
  if (fVar9 < DAT_028ab0b0) {
    return;
  }
  if (*(long *)(param_5 + 0x160) == 0) goto LAB_02786460;
  uVar8 = FUN_02748ec4(*(long *)(param_5 + 0x160),0);
  local_40 = CONCAT44(param_2,uVar8);
  local_38 = CONCAT44(param_4,param_3);
  fVar9 = (float)FUN_026884d4(&local_40,0);
  if (fVar9 < fVar10) {
    return;
  }
  if ((*(long *)(param_5 + 0x160) == 0) ||
     (plVar3 = (long *)FUN_02748b64(*(long *)(param_5 + 0x160),0), puVar1 = StringLiteral_4493,
     plVar3 == (long *)0x0)) goto LAB_02786460;
  lVar5 = *plVar3;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)StringLiteral_4493) {
        puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 5) * 0x10 + 0x138);
        goto LAB_02785c48;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined8 *)FUN_00d59724(plVar3,*(long *)StringLiteral_4493,5);
LAB_02785c48:
  fVar9 = (float)(*(code *)*puVar4)(plVar3,puVar4[1]);
  fVar10 = DAT_028aa020;
  param_3 = param_3 * param_3;
  fVar12 = param_4 * param_4;
  if (fVar12 + param_3 + fVar9 * fVar9 + param_2 * param_2 < DAT_028aa020) {
LAB_02785ce4:
    lVar5 = *plVar3;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 9) * 0x10 + 0x138);
          goto LAB_02785d34;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_00d59724(plVar3,*(long *)puVar1,9);
LAB_02785d34:
    fVar9 = (float)(*(code *)*puVar4)(plVar3,puVar4[1]);
    fVar13 = fVar12 * fVar12;
    param_3 = param_3 * param_3;
    fVar12 = param_4 * param_4;
    if (fVar10 <= fVar12 + param_3 + fVar9 * fVar9 + fVar13) {
      lVar5 = *plVar3;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0xc) * 0x10 + 0x138);
            goto LAB_02785db4;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_00d59724(plVar3,*(long *)puVar1,0xc);
LAB_02785db4:
      fVar9 = (float)(*(code *)*puVar4)(plVar3,puVar4[1]);
      if (0.0 < fVar9) goto LAB_02785f90;
    }
    lVar5 = *plVar3;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 7) * 0x10 + 0x138);
          goto LAB_02785e18;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_00d59724(plVar3,*(long *)puVar1,7);
LAB_02785e18:
    fVar9 = (float)(*(code *)*puVar4)(plVar3,puVar4[1]);
    fVar13 = fVar12 * fVar12;
    param_3 = param_3 * param_3;
    fVar12 = param_4 * param_4;
    if (fVar10 <= fVar12 + param_3 + fVar9 * fVar9 + fVar13) {
      lVar5 = *plVar3;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 8) * 0x10 + 0x138);
            goto LAB_02785e98;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_00d59724(plVar3,*(long *)puVar1,8);
LAB_02785e98:
      fVar9 = (float)(*(code *)*puVar4)(plVar3,puVar4[1]);
      if (0.0 < fVar9) goto LAB_02785f90;
    }
    lVar5 = *plVar3;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
          goto LAB_02785efc;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_00d59724(plVar3,*(long *)puVar1,1);
LAB_02785efc:
    fVar9 = (float)(*(code *)*puVar4)(plVar3,puVar4[1]);
    fVar13 = fVar12 * fVar12;
    param_3 = param_3 * param_3;
    fVar12 = param_4 * param_4;
    if (fVar12 + param_3 + fVar9 * fVar9 + fVar13 < fVar10) {
      return;
    }
    lVar5 = *plVar3;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 4) * 0x10 + 0x138);
          goto LAB_02785f7c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_00d59724(plVar3,*(long *)puVar1,4);
LAB_02785f7c:
    fVar10 = (float)(*(code *)*puVar4)(plVar3,puVar4[1]);
    if (fVar10 <= 0.0) {
      return;
    }
  }
  else {
    lVar5 = *plVar3;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 6) * 0x10 + 0x138);
          goto LAB_02785cd0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_00d59724(plVar3,*(long *)puVar1,6);
LAB_02785cd0:
    fVar9 = (float)(*(code *)*puVar4)(plVar3,puVar4[1]);
    if (fVar9 <= 0.0) goto LAB_02785ce4;
  }
LAB_02785f90:
  memset(&local_1b0,0,0xb8);
  if (*(long *)(param_5 + 0x160) != 0) {
    local_1b0 = FUN_0274c234(*(long *)(param_5 + 0x160),0);
    lVar5 = *plVar3;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
    fStack_1ac = fVar12;
    local_1a8 = param_3;
    fStack_1a4 = param_4;
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 5) * 0x10 + 0x138);
          goto LAB_02786008;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_00d59724(plVar3,*(long *)puVar1,5);
LAB_02786008:
    local_190 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    lVar5 = *plVar3;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
    fStack_18c = fVar12;
    local_188 = param_3;
    fStack_184 = param_4;
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 9) * 0x10 + 0x138);
          goto LAB_0278606c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_00d59724(plVar3,*(long *)puVar1,9);
LAB_0278606c:
    local_180 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    lVar5 = *plVar3;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
    fStack_17c = fVar12;
    local_178 = param_3;
    fStack_174 = param_4;
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 7) * 0x10 + 0x138);
          goto LAB_027860d0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_00d59724(plVar3,*(long *)puVar1,7);
LAB_027860d0:
    local_170 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    lVar5 = *plVar3;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
    local_16c = fVar12;
    local_168 = param_3;
    local_164 = param_4;
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
          goto LAB_0278613c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_00d59724(plVar3,*(long *)puVar1,1);
LAB_0278613c:
    local_160 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    lVar5 = *plVar3;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
    local_15c = fVar12;
    local_158 = param_3;
    local_154 = param_4;
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 6) * 0x10 + 0x138);
          goto FUN_027861a8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_00d59724(plVar3,*(long *)puVar1,6);
FUN_027861a8:
    local_150 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    lVar5 = *plVar3;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0xc) * 0x10 + 0x138);
          goto LAB_02786208;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_00d59724(plVar3,*(long *)puVar1,0xc);
LAB_02786208:
    local_14c = (*(code *)*puVar4)(plVar3,puVar4[1]);
    lVar5 = *plVar3;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 8) * 0x10 + 0x138);
          goto UnityEngine_UIElements_PanelEventHandler_PointerEvent__set_pressure;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_00d59724(plVar3,*(long *)puVar1,8);
UnityEngine_UIElements_PanelEventHandler_PointerEvent__set_pressure:
    local_148 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    lVar5 = *plVar3;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 4) * 0x10 + 0x138);
          goto UnityEngine_UIElements_PanelEventHandler_PointerEvent__set_radiusVariance;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_00d59724(plVar3,*(long *)puVar1,4);
UnityEngine_UIElements_PanelEventHandler_PointerEvent__set_radiusVariance:
    local_144 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if (*(long *)(param_5 + 0x160) != 0) {
      local_118 = FUN_02826878(*(undefined8 *)(param_5 + 0x10),
                               *(undefined8 *)(*(long *)(param_5 + 0x160) + 0x178),0);
      if (*(long *)(param_5 + 0x160) != 0) {
        local_110 = FUN_02826878(*(undefined8 *)(param_5 + 0x10),
                                 *(undefined8 *)(*(long *)(param_5 + 0x160) + 0x180),0);
        if (*(long *)(param_5 + 0x160) != 0) {
          local_108 = FUN_02826878(*(undefined8 *)(param_5 + 0x10),
                                   *(undefined8 *)(*(long *)(param_5 + 0x160) + 0x188),0);
          if (*(long *)(param_5 + 0x160) != 0) {
            local_100 = FUN_02826878(*(undefined8 *)(param_5 + 0x10),
                                     *(undefined8 *)(*(long *)(param_5 + 0x160) + 400),0);
            if ((*(long *)(param_5 + 0x160) != 0) &&
               (plVar3 = (long *)FUN_0274aad0(*(long *)(param_5 + 0x160),0), plVar3 != (long *)0x0))
            {
              lVar5 = *plVar3;
              uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
              if (uVar6 != 0) {
                piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar7 + -2) ==
                      *(long *)
                       Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractorAffordanceStateProvider_<ClickAnimation>d__96_System_Collections_IEnumerator_Reset__
                     ) {
                    puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
                    goto LAB_027863b8;
                  }
                  uVar6 = uVar6 - 1;
                  piVar7 = piVar7 + 4;
                } while (uVar6 != 0);
              }
              puVar4 = (undefined8 *)
                       FUN_00d59724(plVar3,*(long *)
                                            Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractorAffordanceStateProvider_<ClickAnimation>d__96_System_Collections_IEnumerator_Reset__
                                    ,2);
LAB_027863b8:
              iVar2 = (*(code *)*puVar4)(plVar3,puVar4[1]);
              puVar1 = 
              Method_UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<ARSessionOrigin>_TryFindComponent__
              ;
              if (iVar2 == 1) {
                lVar5 = *(long *)
                         Method_UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<ARSessionOrigin>_TryFindComponent__
                ;
                if (*(int *)(lVar5 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                  lVar5 = *(long *)puVar1;
                }
                auVar11 = *(undefined1 (*) [16])(*(long *)(lVar5 + 0xb8) + 0x18);
              }
              else {
                auVar11 = NEON_fmov(0x3f800000,4);
              }
              uStack_198 = auVar11._8_8_;
              local_1a0 = auVar11._0_8_;
              memcpy(auStack_f8,&local_1b0,0xb8);
              FUN_02826bb8(*(undefined8 *)(param_5 + 0x160),auStack_88,auStack_70,auStack_80,
                           auStack_78,0);
              memcpy(auStack_268,auStack_f8,0xb8);
              FUN_02784af0(param_5,auStack_268);
              return;
            }
          }
        }
      }
    }
  }
LAB_02786460:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


