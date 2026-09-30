/*
FUNCTION_NAME: FUN_0735e454
ENTRY_POINT: 0735e454
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x0735e6a4) */

void FUN_0735e454(undefined1 param_1 [16],float param_2,long param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong uVar8;
  int *piVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long lStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  if ((DAT_07ef3150 & 1) == 0) {
    FUN_03642964(PTR_DAT_079f4598);
    FUN_03642964(
                Method_Oculus_Interaction_Body_Input_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>__ctor__
                );
    FUN_03642964(PTR_DAT_079ffc18);
    DAT_07ef3150 = 1;
  }
  lStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_78 = 0;
  local_80 = 0;
  if ((param_4 != 0) && (*(long *)(param_3 + 0x10) != 0)) {
    fVar12 = *(float *)(param_4 + 0xa0);
    fVar13 = *(float *)(param_4 + 0xa4);
    uVar11 = *(undefined4 *)(param_4 + 0xa8);
    fVar10 = (float)FUN_0732095c(*(long *)(param_3 + 0x10),0);
    if (*(long *)(param_3 + 0x10) != 0) {
      FUN_0732095c(*(long *)(param_3 + 0x10),0);
      if ((*(long *)(param_3 + 0x10) != 0) &&
         (lVar2 = *(long *)(*(long *)(param_3 + 0x10) + 0x2e0), lVar2 != 0)) {
        uVar1 = FUN_072b00a4(fVar12 - fVar10,fVar13 - param_2,uVar11,lVar2,1,0);
        if (-1 < (int)uVar1) {
          lVar2 = FUN_0735dad8(param_3);
          if ((lVar2 == 0) || (lVar2 = *(long *)(lVar2 + 0x40), lVar2 == 0)) goto LAB_0735e698;
          if (*(uint *)(lVar2 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c20();
          }
          lVar2 = lVar2 + (ulong)uVar1 * 0x30;
          uStack_78 = *(undefined8 *)(lVar2 + 0x28);
          local_80 = *(undefined8 *)(lVar2 + 0x20);
          lStack_68 = *(long *)(lVar2 + 0x38);
          local_70 = *(undefined8 *)(lVar2 + 0x30);
          uStack_58 = *(undefined8 *)(lVar2 + 0x48);
          local_60 = *(undefined8 *)(lVar2 + 0x40);
          if ((((int)local_80 != 0x26afb9) && (lStack_68 != 0)) && (0 < (int)uStack_78)) {
            uVar3 = FUN_0727b77c(&local_80,0);
            uVar4 = FUN_0735dad8(param_3);
            uVar4 = FUN_0727b684(&local_80,uVar4,0);
            if (*(int *)(*(long *)
                          Method_Oculus_Interaction_Body_Input_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>__ctor__
                        + 0xe4) == 0) {
              thunk_FUN_036a1978(*(long *)
                                  Method_Oculus_Interaction_Body_Input_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>__ctor__
                                );
            }
            plVar5 = (long *)FUN_073d75e0(param_4,uVar3,uVar4,0);
            if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            plVar5[7] = *(long *)(param_3 + 0x10);
            thunk_FUN_036b7ad0();
            plVar6 = *(long **)(param_3 + 0x10);
            if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            (**(code **)(*plVar6 + 0x188))(plVar6,plVar5,*(undefined8 *)(*plVar6 + 400));
            if (plVar5 != (long *)0x0) {
              lVar2 = *plVar5;
              uVar8 = (ulong)*(ushort *)(lVar2 + 0x12e);
              if (uVar8 != 0) {
                piVar9 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_079f4598) {
                    puVar7 = (undefined8 *)(lVar2 + (long)*piVar9 * 0x10 + 0x138);
                    goto LAB_0735e66c;
                  }
                  uVar8 = uVar8 - 1;
                  piVar9 = piVar9 + 4;
                } while (uVar8 != 0);
              }
              puVar7 = (undefined8 *)FUN_0367cd30(plVar5,*(long *)PTR_DAT_079f4598,0);
LAB_0735e66c:
              (*(code *)*puVar7)(plVar5,puVar7[1]);
            }
          }
        }
        return;
      }
    }
  }
LAB_0735e698:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


