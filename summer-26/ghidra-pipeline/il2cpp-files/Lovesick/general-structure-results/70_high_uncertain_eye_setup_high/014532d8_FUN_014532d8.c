/*
FUNCTION_NAME: FUN_014532d8
ENTRY_POINT: 014532d8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


long FUN_014532d8(long param_1,long param_2,undefined4 param_3,undefined4 param_4,uint param_5,
                 long *param_6)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  if ((DAT_03776a7a & 1) == 0) {
    thunk_FUN_00d48444(Method_OVRTaskBuilder<OVRPlugin_Result>_SetStateMachine__);
    thunk_FUN_00d48444(System_Collections_Generic_List<StyleSheet>_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_12054);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__);
                    /* try { // try from 01453348 to 0155374b has its CatchHandler @ 01453348
                       catch() { ... } // from try @ 01453348 with catch @ 01453348
                       catch() { ... } // from try @ 01453820 with catch @ 01453348
                       catch() { ... } // from try @ 01453864 with catch @ 01453348
                       catch() { ... } // from try @ 01453a14 with catch @ 01453348
                       catch() { ... } // from try @ 01453bc8 with catch @ 01453348
                       catch() { ... } // from try @ 01453c60 with catch @ 01453348 */
    thunk_FUN_00d48444(Method_Obi_ObiNativeList<TriangleMeshHeader>__ctor__);
    DAT_03776a7a = 1;
  }
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  if (param_6 != (long *)0x0) {
    lVar8 = *param_6;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12a);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)StringLiteral_12054) {
          puVar4 = (undefined8 *)(lVar8 + (long)(*piVar11 + 4) * 0x10 + 0x138);
          goto LAB_014533c8;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined8 *)FUN_00d59724(param_6,*(long *)StringLiteral_12054,4);
LAB_014533c8:
    (*(code *)*puVar4)(param_6,param_1,param_2,&local_60,&local_70,param_5 & 1,param_3,param_4,
                       (long)&local_78 + 4,&local_78,puVar4[1]);
    if ((((param_1 != 0) && (*(long *)(param_1 + 0x20) != 0)) && (param_2 != 0)) &&
       (*(long *)(param_2 + 0x20) != 0)) {
      lVar8 = FUN_00da4fb8(*(undefined8 *)Method_Obi_ObiNativeList<TriangleMeshHeader>__ctor__,
                           *(int *)(*(long *)(param_2 + 0x20) + 0x18) +
                           *(int *)(*(long *)(param_1 + 0x20) + 0x18));
      if ((*(long *)(param_1 + 0x20) != 0) && (*(long *)(param_2 + 0x20) != 0)) {
        uVar5 = FUN_00da4fb8(*(undefined8 *)System_Collections_Generic_List<StyleSheet>_TypeInfo,
                             *(int *)(*(long *)(param_2 + 0x20) + 0x18) +
                             *(int *)(*(long *)(param_1 + 0x20) + 0x18));
        if ((*(long *)(param_1 + 0x20) != 0) && (*(long *)(param_2 + 0x20) != 0)) {
          lVar6 = FUN_00da4fb8(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__,
                               *(int *)(*(long *)(param_2 + 0x20) + 0x18) +
                               *(int *)(*(long *)(param_1 + 0x20) + 0x18));
          lVar9 = *(long *)(param_1 + 0x28);
          if (lVar9 != 0) {
            FUN_01796450(lVar9,uVar5,*(undefined4 *)(lVar9 + 0x18),0);
            if ((*(long *)(param_1 + 0x28) != 0) && (lVar9 = *(long *)(param_2 + 0x28), lVar9 != 0))
            {
              FUN_01795470(lVar9,0,uVar5,*(undefined4 *)(*(long *)(param_1 + 0x28) + 0x18),
                           *(undefined4 *)(lVar9 + 0x18),0);
              lVar9 = *(long *)(param_1 + 0x30);
              if (lVar9 != 0) {
                FUN_01796450(lVar9,lVar6,*(undefined4 *)(lVar9 + 0x18),0);
                if ((*(long *)(param_1 + 0x30) != 0) &&
                   (lVar9 = *(long *)(param_2 + 0x30), lVar9 != 0)) {
                  FUN_01795470(lVar9,0,lVar6,*(undefined4 *)(*(long *)(param_1 + 0x30) + 0x18),
                               *(undefined4 *)(lVar9 + 0x18),0);
                  lVar9 = *(long *)(param_1 + 0x20);
                  if (lVar9 != 0) {
                    FUN_01796450(lVar9,lVar8,*(undefined4 *)(lVar9 + 0x18),0);
                    puVar3 = Method_OVRTaskBuilder<OVRPlugin_Result>_SetStateMachine__;
                    lVar9 = *(long *)(param_1 + 0x20);
                    if (lVar9 != 0) {
                      uVar10 = 0;
                      do {
                        if ((long)(int)*(uint *)(lVar9 + 0x18) <= (long)uVar10) {
                          lVar9 = *(long *)(param_2 + 0x20);
                          if (lVar9 != 0) {
                            uVar10 = 0;
                            goto LAB_014536ac;
                          }
                          break;
                        }
                        if (*(uint *)(lVar9 + 0x18) <= uVar10) goto LAB_01453888;
                        lVar9 = lVar9 + uVar10 * 0x10;
                        uStack_88 = *(undefined8 *)(lVar9 + 0x28);
                        local_90 = *(undefined8 *)(lVar9 + 0x20);
                        fVar12 = (float)FUN_02688390(&local_60,0);
                        fVar13 = (float)FUN_02688390(&local_90,0);
                        fVar14 = (float)FUN_026884c4(&local_60,0);
                        FUN_02688398(fVar12 + fVar13 * fVar14,&local_90,0);
                        fVar12 = (float)FUN_026883a0(&local_60,0);
                        fVar13 = (float)FUN_026883a0(&local_90,0);
                        fVar14 = (float)FUN_026884d4(&local_60,0);
                        FUN_026883a8(fVar12 + fVar13 * fVar14,&local_90,0);
                        fVar12 = (float)FUN_026884c4(&local_90,0);
                        fVar13 = (float)FUN_026884c4(&local_60,0);
                        FUN_026884cc(fVar12 * fVar13,&local_90,0);
                        fVar12 = (float)FUN_026884d4(&local_90,0);
                        fVar13 = (float)FUN_026884d4(&local_60,0);
                        FUN_026884dc(fVar12 * fVar13,&local_90,0);
                        if (lVar8 == 0) break;
                        if (*(uint *)(lVar8 + 0x18) <= uVar10) goto LAB_01453888;
                        lVar9 = lVar8 + uVar10 * 0x10;
                        *(undefined8 *)(lVar9 + 0x28) = uStack_88;
                        *(undefined8 *)(lVar9 + 0x20) = local_90;
                        lVar9 = *(long *)(param_1 + 0x30);
                        if (lVar9 == 0) break;
                        if (*(uint *)(lVar9 + 0x18) <= uVar10) goto LAB_01453888;
                        if (lVar6 == 0) break;
                        if (*(uint *)(lVar6 + 0x18) <= uVar10) goto LAB_01453888;
                        lVar1 = uVar10 * 4;
                        lVar2 = uVar10 * 4;
                        uVar10 = uVar10 + 1;
                        *(undefined4 *)(lVar6 + lVar2 + 0x20) =
                             *(undefined4 *)(lVar9 + lVar1 + 0x20);
                        lVar9 = *(long *)(param_1 + 0x20);
                      } while (lVar9 != 0);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_01453884:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
LAB_014536ac:
  if ((long)(int)*(uint *)(lVar9 + 0x18) <= (long)uVar10) {
    lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
    if (lVar9 != 0) {
      FUN_01435978(lVar9,uVar5,0);
      *(undefined4 *)(lVar9 + 0x10) = local_78._4_4_;
      *(long *)(lVar9 + 0x20) = lVar8;
      *(undefined8 *)(lVar9 + 0x28) = uVar5;
      *(long *)(lVar9 + 0x30) = lVar6;
      *(undefined4 *)(lVar9 + 0x14) = (undefined4)local_78;
      FUN_014359a0(lVar9,0);
      return lVar9;
    }
    goto LAB_01453884;
  }
  if (*(uint *)(lVar9 + 0x18) <= uVar10) {
LAB_01453888:
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
  lVar9 = lVar9 + uVar10 * 0x10;
  uStack_98 = *(undefined8 *)(lVar9 + 0x28);
  local_a0 = *(undefined8 *)(lVar9 + 0x20);
  fVar12 = (float)FUN_02688390(&local_70,0);
  fVar13 = (float)FUN_02688390(&local_a0,0);
  fVar14 = (float)FUN_026884c4(&local_70,0);
  FUN_02688398(fVar12 + fVar13 * fVar14,&local_a0,0);
  fVar12 = (float)FUN_026883a0(&local_70,0);
  fVar13 = (float)FUN_026883a0(&local_a0,0);
  fVar14 = (float)FUN_026884d4(&local_70,0);
  FUN_026883a8(fVar12 + fVar13 * fVar14,&local_a0,0);
  fVar12 = (float)FUN_026884c4(&local_a0,0);
  fVar13 = (float)FUN_026884c4(&local_70,0);
  FUN_026884cc(fVar12 * fVar13,&local_a0,0);
  fVar12 = (float)FUN_026884d4(&local_a0,0);
  fVar13 = (float)FUN_026884d4(&local_70,0);
  FUN_026884dc(fVar12 * fVar13,&local_a0,0);
  if ((*(long *)(param_1 + 0x20) == 0) || (lVar8 == 0)) goto LAB_01453884;
  uVar7 = (int)uVar10 + (int)*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  if (*(uint *)(lVar8 + 0x18) <= uVar7) goto LAB_01453888;
  lVar9 = lVar8 + (long)(int)uVar7 * 0x10;
  *(undefined8 *)(lVar9 + 0x28) = uStack_98;
  *(undefined8 *)(lVar9 + 0x20) = local_a0;
  if ((*(long *)(param_1 + 0x20) == 0) || (lVar9 = *(long *)(param_2 + 0x30), lVar9 == 0))
  goto LAB_01453884;
  if (*(uint *)(lVar9 + 0x18) <= uVar10) goto LAB_01453888;
  if (lVar6 == 0) goto LAB_01453884;
  uVar7 = (int)uVar10 + (int)*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  if (*(uint *)(lVar6 + 0x18) <= uVar7) goto LAB_01453888;
  lVar1 = uVar10 * 4;
  uVar10 = uVar10 + 1;
  *(undefined4 *)(lVar6 + (long)(int)uVar7 * 4 + 0x20) = *(undefined4 *)(lVar9 + lVar1 + 0x20);
  lVar9 = *(long *)(param_2 + 0x20);
  if (lVar9 == 0) goto LAB_01453884;
  goto LAB_014536ac;
}


