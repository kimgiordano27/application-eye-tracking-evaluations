/*
FUNCTION_NAME: FUN_054afcf8
ENTRY_POINT: 054afcf8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_3;telemetry_or_network_hits_2
*/


undefined4 FUN_054afcf8(long *param_1)

{
  uint uVar1;
  undefined *puVar2;
  char cVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  uint local_34;
  
  if ((DAT_06b7eadf & 1) == 0) {
    FUN_02d6084c(UnityEngine_Networking_UnityWebRequestAsyncOperation_var);
    FUN_02d6084c(UnityEngine_InputSystem_InputControlPath_ParsedPathComponent_var);
    FUN_02d6084c(UnityEngine_ParticleSystem_CollisionModule_var);
    FUN_02d6084c(UnityEngine_ParticleSystem_EmissionModule_var);
    DAT_06b7eadf = 1;
  }
  local_34 = 0;
  lVar8 = param_1[3];
  if (lVar8 != 0) {
    if (*(int *)(lVar8 + 0x3c) == 4) {
      return 0;
    }
    if (*(char *)(lVar8 + 0x3a) != '\0') {
      (**(code **)(*param_1 + 0x438))(param_1,*(undefined8 *)(*param_1 + 0x440));
    }
    FUN_05490cf0(param_1,0);
    if (param_1[3] != 0) {
      if (*(char *)(param_1[3] + 0x48) != '\0') {
        FUN_0548b060(param_1,0);
      }
      if ((char)param_1[0x23] == '\0') {
        lVar10 = param_1[2];
        lVar8 = FUN_0548ad3c(param_1,0);
        if ((lVar8 == 0) || (lVar10 == 0)) goto LAB_054b00fc;
        FUN_05499584(lVar10,*(undefined4 *)(lVar8 + 0x68),*(undefined4 *)((long)param_1 + 0x11c),0);
      }
      if (param_1[2] != 0) {
        uVar5 = FUN_054990bc(param_1[2],0);
        if ((uVar5 & 1) != 0) {
          FUN_0548adf8(param_1,0);
          return 0;
        }
        if (param_1[2] != 0) {
          uVar4 = FUN_054991ac(param_1[2],0);
          puVar2 = UnityEngine_InputSystem_InputControlPath_ParsedPathComponent_var;
          if ((uVar4 & 0xff) == 0x3c) {
            if (param_1[2] != 0) {
              FUN_05499230(param_1[2],0);
              if (param_1[2] != 0) {
                cVar3 = FUN_054991ac(param_1[2],0);
                if (cVar3 != '!') {
                  if (cVar3 == '?') {
                    FUN_054ad560(param_1);
                    return 1;
                  }
                  if (cVar3 == '/') {
                    FUN_054aed84();
                    return 1;
                  }
                  FUN_054aeb88();
                  return 1;
                }
                if (param_1[2] != 0) {
                  FUN_05499230(param_1[2],0);
                  if (param_1[2] != 0) {
                    cVar3 = FUN_054991ac(param_1[2],0);
                    if (cVar3 == '-') {
                      FUN_054af03c(param_1);
                      return 1;
                    }
                    uVar5 = FUN_0548bc30(param_1,0);
                    puVar9 = (undefined8 *)UnityEngine_ParticleSystem_EmissionModule_var;
                    if ((uVar5 & 1) == 0) {
                      FUN_054af360(param_1);
                      return 1;
                    }
                    goto LAB_054b0114;
                  }
                }
              }
            }
          }
          else {
            lVar8 = *(long *)UnityEngine_InputSystem_InputControlPath_ParsedPathComponent_var;
            if (*(int *)(lVar8 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
              lVar8 = *(long *)puVar2;
            }
            lVar8 = **(long **)(lVar8 + 0xb8);
            if (lVar8 != 0) {
              if (*(uint *)(lVar8 + 0x18) <= (uVar4 & 0xff)) goto LAB_054b0100;
              if ((*(byte *)(lVar8 + ((ulong)uVar4 & 0xff) + 0x20) >> 5 & 1) != 0) {
LAB_054b000c:
                FUN_054af600(param_1);
                return 1;
              }
              uVar5 = FUN_0548bc30(param_1,0);
              if (((uVar4 & 0xff) == 0xd) || ((uVar5 & 1) == 0)) {
                lVar8 = *(long *)puVar2;
                if (*(int *)(lVar8 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                  lVar8 = *(long *)puVar2;
                }
                lVar8 = **(long **)(lVar8 + 0xb8);
                if (lVar8 == 0) goto LAB_054b00fc;
                if (*(uint *)(lVar8 + 0x18) <= (uVar4 & 0xff)) goto LAB_054b0100;
                if ((*(byte *)(lVar8 + ((ulong)uVar4 & 0xff) + 0x20) >> 3 & 1) != 0) {
                  FUN_054afac8(param_1,0);
                  return 1;
                }
                uVar1 = uVar4 & 0xff;
                if (uVar1 < 0x5d) {
                  if (uVar1 == 0xd) {
                    if (param_1[2] != 0) {
                      FUN_05499230(param_1[2],0);
                      if (param_1[2] != 0) {
                        uVar5 = FUN_054990bc(param_1[2],0);
                        if ((uVar5 & 1) == 0) {
                          if (param_1[2] == 0) goto LAB_054b00fc;
                          cVar3 = FUN_054991ac(param_1[2],0);
                          if (cVar3 == '\n') goto LAB_054b000c;
                        }
                        lVar8 = FUN_0548a9b0(param_1,0);
                        if ((lVar8 != 0) && (lVar8 = *(long *)(lVar8 + 0x28), lVar8 != 0)) {
                          uVar6 = 10;
                          goto LAB_054b00f0;
                        }
                      }
                    }
                    goto LAB_054b00fc;
                  }
                  if (uVar1 == 0x26) {
                    FUN_054afc30(param_1);
                    return 1;
                  }
                }
                else {
                  if (uVar1 == 0x5d) {
                    if ((param_1[2] == 0) ||
                       (lVar8 = FUN_05499278(param_1[2],3,&local_34,0), lVar8 == 0))
                    goto LAB_054b00fc;
                    uVar4 = *(uint *)(lVar8 + 0x18);
                    if (uVar4 <= local_34) {
LAB_054b0100:
                    /* WARNING: Subroutine does not return */
                      FUN_02d60af0();
                    }
                    if (*(char *)(lVar8 + (int)local_34 + 0x20) == ']') {
                      if (uVar4 <= local_34 + 1) goto LAB_054b0100;
                      if (*(char *)(lVar8 + (int)(local_34 + 1) + 0x20) == ']') {
                        if (uVar4 <= local_34 + 2) goto LAB_054b0100;
                        puVar9 = (undefined8 *)UnityEngine_ParticleSystem_CollisionModule_var;
                        if (*(char *)(lVar8 + (int)(local_34 + 2) + 0x20) == '>') goto LAB_054b0114;
                      }
                    }
                    if (param_1[2] != 0) {
                      FUN_05499230(param_1[2],0);
                      lVar8 = FUN_0548a9b0(param_1,0);
                      if ((lVar8 != 0) && (lVar8 = *(long *)(lVar8 + 0x28), lVar8 != 0)) {
                        uVar6 = 0x5d;
LAB_054b00f0:
                        FUN_05486950(lVar8,uVar6,0);
                        return 1;
                      }
                    }
                    goto LAB_054b00fc;
                  }
                  if (uVar1 == 0xef) {
                    FUN_054afac8(param_1,1);
                    return 1;
                  }
                }
                FUN_054af2c4(param_1,uVar4);
                puVar9 = (undefined8 *)UnityEngine_ParticleSystem_CollisionModule_var;
              }
              else {
                FUN_054b016c(param_1);
                puVar9 = (undefined8 *)UnityEngine_ParticleSystem_EmissionModule_var;
              }
LAB_054b0114:
              uVar6 = FUN_054f9054(*puVar9,0);
              uVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                          UnityEngine_Networking_UnityWebRequestAsyncOperation_var);
              FUN_05678430(uVar7,uVar6,0);
                    /* WARNING: Subroutine does not return */
              FUN_054ae180(param_1,uVar7);
            }
          }
        }
      }
    }
  }
LAB_054b00fc:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


