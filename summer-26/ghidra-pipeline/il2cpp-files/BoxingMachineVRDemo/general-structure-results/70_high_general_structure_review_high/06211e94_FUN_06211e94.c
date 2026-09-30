/*
FUNCTION_NAME: FUN_06211e94
ENTRY_POINT: 06211e94
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


long * FUN_06211e94(long param_1,long param_2)

{
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  undefined8 uVar16;
  undefined8 local_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  long local_b0;
  undefined8 uStack_a8;
  long *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  long local_80;
  undefined8 local_78;
  long *local_70;
  
  if ((DAT_06b8b502 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_0676b560);
    FUN_02d6084c(Method_RootMotion_FinalIK_VRIKRootController_OnPreUpdate__);
    FUN_02d6084c(Method_RootMotion_Demos_VRPuppet_OnCollisionImpulse__);
    FUN_02d6084c(Method_RootMotion_Demos_VRPuppet_OnMuscleHit__);
    FUN_02d6084c(PTR_DAT_0675eb90);
    FUN_02d6084c(Method_System_Xml_ValidateNames_SplitQName__);
    FUN_02d6084c(Method_System_Text_EncodingNLS_GetChars__);
    FUN_02d6084c(Method_System_Xml_ValidateNames_ThrowInvalidName__);
    FUN_02d6084c(Method_Newtonsoft_Json_Utilities_ValidationUtils_ArgumentNotNull__);
    FUN_02d6084c(PTR_DAT_067618c0);
    FUN_02d6084c(PTR_DAT_067618c8);
    FUN_02d6084c(Method_Unity_VisualScripting_ValueConnection__ctor__);
    FUN_02d6084c(Method_Firebase_Firestore_ValueDeserializer_Deserialize__);
    FUN_02d6084c(PTR_DAT_0675e1b8);
    FUN_02d6084c(PTR_DAT_06767b48);
    DAT_06b8b502 = 1;
  }
  local_70 = (long *)0x0;
  uStack_88 = 0;
  local_90 = 0;
  local_78 = 0;
  local_80 = 0;
  local_98 = 0;
  plVar8 = *(long **)(param_1 + 0x80);
  if (plVar8 != (long *)0x0) {
    plVar8 = (long *)(**(code **)(*plVar8 + 0x178))(plVar8,*(undefined8 *)(*plVar8 + 0x180));
    puVar4 = PTR_DAT_0676b560;
    if (plVar8 != (long *)0x0) {
      bVar2 = *(byte *)(*(long *)PTR_DAT_06767b48 + 0x130);
      if ((*(byte *)(*plVar8 + 0x130) < bVar2) ||
         (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_06767b48))
      {
                    /* WARNING: Subroutine does not return */
        FUN_02d60e88(plVar8);
      }
    }
    plVar9 = *(long **)(param_1 + 0x80);
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x188))(plVar9,plVar8,*(undefined8 *)(*plVar9 + 400));
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar10 = FUN_062123fc(param_2);
      if ((uVar10 & 1) == 0) {
LAB_06212214:
        if (*(long *)(param_1 + 0x70) == 0) {
LAB_06212280:
          if (*(long *)(param_1 + 0x78) == 0) {
LAB_06212348:
            lVar11 = *(long *)(param_1 + 0x68);
            if (lVar11 == 0) {
              return plVar8;
            }
            uVar10 = 0;
            do {
              if ((long)(int)*(uint *)(lVar11 + 0x18) <= (long)uVar10) {
                return plVar8;
              }
              if (*(uint *)(lVar11 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
                FUN_02d60af0();
              }
              if (plVar8 == (long *)0x0) break;
              FUN_061cb6b0(plVar8,*(undefined8 *)(lVar11 + uVar10 * 8 + 0x20),0);
              lVar11 = *(long *)(param_1 + 0x68);
              uVar10 = uVar10 + 1;
            } while (lVar11 != 0);
          }
          else {
            lVar11 = FUN_06211b4c(param_1);
            puVar5 = Method_Firebase_Firestore_ValueDeserializer_Deserialize__;
            puVar4 = PTR_DAT_0675e1b8;
            if (lVar11 != 0) {
              iVar15 = 0;
              do {
                if (*(int *)(lVar11 + 0x18) <= iVar15) goto LAB_06212348;
                lVar11 = FUN_06211b4c(param_1);
                if (lVar11 == 0) break;
                uVar12 = FUN_03aac1c4(lVar11,iVar15,*(undefined8 *)puVar5);
                if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4(*(long *)puVar4);
                }
                uVar10 = FUN_0606a004(uVar12,0,0);
                if ((uVar10 & 1) != 0) {
                  if (plVar8 == (long *)0x0) break;
                  local_98 = FUN_061d23ec(plVar8,0);
                  lVar11 = FUN_06211b4c(param_1);
                  if (lVar11 == 0) break;
                  uVar12 = FUN_03aac1c4(lVar11,iVar15,*(undefined8 *)puVar5);
                  FUN_0621e3f4(&local_98,uVar12,0);
                }
                iVar15 = iVar15 + 1;
                lVar11 = FUN_06211b4c(param_1);
              } while (lVar11 != 0);
            }
          }
        }
        else {
          lVar11 = FUN_06211ab8(param_1);
          puVar4 = PTR_DAT_067618c8;
          if (lVar11 != 0) {
            iVar15 = 0;
            do {
              if (*(int *)(lVar11 + 0x18) <= iVar15) goto LAB_06212280;
              lVar11 = FUN_06211ab8(param_1);
              if ((lVar11 == 0) ||
                 (uVar12 = FUN_03aac1c4(lVar11,iVar15,*(undefined8 *)puVar4), plVar8 == (long *)0x0)
                 ) break;
              FUN_061d2410(plVar8,uVar12,0);
              iVar15 = iVar15 + 1;
              lVar11 = FUN_06211ab8(param_1);
            } while (lVar11 != 0);
          }
        }
      }
      else {
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        lVar11 = *(long *)(param_2 + 8);
        if (lVar11 != 0) {
          uVar1 = *(undefined4 *)(param_1 + 0x28);
          lVar13 = *(long *)(lVar11 + 0x10);
          lVar14 = *(long *)PTR_DAT_0675eb90;
          *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
          if (lVar13 != 0) {
            uVar3 = *(uint *)(lVar11 + 0x18);
            if (uVar3 < *(uint *)(lVar13 + 0x18)) {
              *(uint *)(lVar11 + 0x18) = uVar3 + 1;
              *(undefined4 *)(lVar13 + (long)(int)uVar3 * 4 + 0x20) = uVar1;
            }
            else {
              FUN_03a382d0(lVar11,uVar1,
                           *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
            }
            puVar7 = Method_Unity_VisualScripting_ValueConnection__ctor__;
            puVar6 = Method_System_Xml_ValidateNames_SplitQName__;
            puVar5 = Method_RootMotion_Demos_VRPuppet_OnCollisionImpulse__;
            if (*(long *)(param_2 + 0x28) != 0) {
              iVar15 = *(int *)(*(long *)(param_2 + 0x28) + 0x18);
              while( true ) {
                iVar15 = iVar15 + -1;
                if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                }
                if (iVar15 < 0) break;
                if ((*(long *)(param_2 + 0x28) == 0) ||
                   (FUN_03b73250(&local_c0,*(long *)(param_2 + 0x28),iVar15,*(undefined8 *)puVar7),
                   local_b0 == 0)) goto LAB_0621238c;
                FUN_03c04a60(&local_c0,local_b0,*(undefined8 *)puVar6);
                uStack_88 = CONCAT44(uStack_b4,uStack_b8);
                local_90 = local_c0;
                local_78 = uStack_a8;
                local_80 = local_b0;
                local_70 = local_a0;
                while (uVar10 = FUN_04aeb388(&local_90,*(undefined8 *)puVar5), plVar9 = local_70,
                      uVar12 = local_78, (uVar10 & 1) != 0) {
                  if (*(int *)(param_1 + 0x28) == (int)local_80) {
                    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                      thunk_FUN_02dbd7b4();
                    }
                    if (*(long *)(param_2 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02d60ae8();
                    }
                    uVar16 = *(undefined8 *)(param_2 + 8);
                    FUN_03b73250(&local_c0,*(long *)(param_2 + 0x28),iVar15,*(undefined8 *)puVar7);
                    uVar10 = FUN_06211d7c(uVar16,uVar12,uStack_b8);
                    if ((uVar10 & 1) != 0) {
                      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_02d60ae8();
                      }
                      (**(code **)(*plVar9 + 0x188))(plVar9,plVar8,*(undefined8 *)(*plVar9 + 400));
                    }
                  }
                }
                FUN_04aeb384(&local_90,
                             *(undefined8 *)
                              Method_RootMotion_FinalIK_VRIKRootController_OnPreUpdate__);
              }
              if (*(long *)(param_2 + 8) != 0) {
                FUN_03a396f0(*(long *)(param_2 + 8),*(undefined4 *)(param_1 + 0x28),
                             *(undefined8 *)Method_System_Text_EncodingNLS_GetChars__);
                goto LAB_06212214;
              }
            }
          }
        }
      }
    }
  }
LAB_0621238c:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


