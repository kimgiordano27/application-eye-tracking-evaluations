/*
FUNCTION_NAME: FUN_0629ad5c
ENTRY_POINT: 0629ad5c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_14;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_0629ad5c(long param_1,long param_2)

{
  uint uVar1;
  char cVar2;
  ushort uVar3;
  undefined *puVar4;
  byte bVar5;
  uint uVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  bool bVar13;
  long lVar14;
  int *piVar15;
  uint uVar16;
  
  if ((DAT_06b8bad6 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_0676ad18);
    FUN_02d6084c(Method_Unity_Burst_Intrinsics_Arm_Neon_vcageq_f64__);
    FUN_02d6084c(
                Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Vector3>__
                );
    FUN_02d6084c(Method_Unity_Burst_Intrinsics_Arm_Neon_vcages_f32__);
    FUN_02d6084c(PTR_DAT_0676a930);
    FUN_02d6084c(Method_Unity_Burst_Intrinsics_Arm_Neon_vcagt_f32__);
    FUN_02d6084c(PTR_DAT_0676a938);
    FUN_02d6084c(Method_System_Net_WebRequest_<GetResponseAsync>b__79_0__);
    DAT_06b8bad6 = 1;
  }
  if (*(long *)(param_1 + 0x10) == 0) goto LAB_0629b740;
  uVar7 = FUN_061f81a8(*(long *)(param_1 + 0x10),0);
  if ((uVar7 & 1) == 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x28) = 0;
  if (param_2 == 0) goto LAB_0629b740;
  FUN_062ed318(param_2,*(undefined8 *)(param_1 + 0x20),0);
  if (*(long *)(param_1 + 0x18) == 0) goto LAB_0629b740;
  uVar6 = FUN_060d031c(*(long *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),0);
  if ((uVar6 & 1) == 0) {
    uVar3 = *(ushort *)(param_2 + 0x68);
    uVar7 = FUN_039136ec(param_2,*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcageq_f64__)
    ;
    if ((uVar7 & 1) != 0) {
      uVar7 = FUN_039136d4(param_2,*(undefined8 *)
                                    Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Vector3>__
                          );
      if (uVar3 == 0) {
        return;
      }
      if ((uVar7 & 1) == 0) {
        return;
      }
    }
    if ((uVar3 == 9) && (*(int *)(param_2 + 0x6c) == 0)) {
      if (*(int *)(param_2 + 100) == 0) {
        return;
      }
    }
    else if (*(int *)(param_2 + 0x6c) == 9) {
      if ((*(long *)(param_1 + 0x10) == 0) ||
         (plVar8 = (long *)FUN_061f61c4(*(long *)(param_1 + 0x10),0), plVar8 == (long *)0x0))
      goto LAB_0629b740;
      lVar14 = *plVar8;
      uVar7 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar7 != 0) {
        piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_0676ad18) {
            puVar10 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_0629b004;
          }
          uVar7 = uVar7 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar7 != 0);
      }
      puVar10 = (undefined8 *)FUN_02d9a5d4(plVar8,*(long *)PTR_DAT_0676ad18,0);
LAB_0629b004:
      uVar7 = (*(code *)*puVar10)(plVar8,puVar10[1]);
      if ((uVar7 & 1) == 0) {
        uVar7 = FUN_062eddd0(param_2,0);
      }
      else {
        uVar11 = FUN_039136b0(param_2,*(undefined8 *)PTR_DAT_0676a938);
        uVar7 = FUN_062eddd0(param_2,0);
        if ((uVar11 & 1) == 0) {
          if ((uVar7 & 1) == 0) {
            return;
          }
          goto LAB_0629b040;
        }
      }
      if ((uVar7 & 1) == 0) {
        return;
      }
      plVar8 = *(long **)(param_1 + 0x10);
      if (plVar8 != (long *)0x0) {
        lVar14 = (**(code **)(*plVar8 + 0x228))(plVar8,*(undefined8 *)(*plVar8 + 0x230));
        uVar9 = *(undefined8 *)(param_1 + 0x10);
        uVar7 = FUN_039136b0(param_2,*(undefined8 *)PTR_DAT_0676a938);
        puVar4 = Method_System_Net_WebRequest_<GetResponseAsync>b__79_0__;
        if (*(int *)(*(long *)Method_System_Net_WebRequest_<GetResponseAsync>b__79_0__ + 0xe4) == 0)
        {
          thunk_FUN_02dbd7b4(*(long *)Method_System_Net_WebRequest_<GetResponseAsync>b__79_0__);
        }
        if ((uVar7 & 1) == 0) {
          if (DAT_06b8b57d == '\0') {
            FUN_02d6084c(Method_System_Net_WebRequest_<GetResponseAsync>b__79_0__);
            DAT_06b8b57d = '\x01';
          }
          lVar12 = *(long *)puVar4;
          if (*(int *)(lVar12 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
            lVar12 = *(long *)puVar4;
          }
          puVar10 = (undefined8 *)(*(long *)(lVar12 + 0xb8) + 8);
        }
        else {
          if (DAT_06b8b57c == '\0') {
            FUN_02d6084c(Method_System_Net_WebRequest_<GetResponseAsync>b__79_0__);
            DAT_06b8b57c = '\x01';
          }
          lVar12 = *(long *)puVar4;
          if (*(int *)(lVar12 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
            lVar12 = *(long *)puVar4;
          }
          puVar10 = *(undefined8 **)(lVar12 + 0xb8);
        }
        if (lVar14 != 0) {
          FUN_062f8bb4(lVar14,uVar9,*puVar10,0);
          FUN_062e82ac(param_2,0);
          return;
        }
      }
      goto LAB_0629b740;
    }
LAB_0629b040:
    if ((*(long *)(param_1 + 0x10) == 0) ||
       (plVar8 = (long *)FUN_061f61c4(*(long *)(param_1 + 0x10),0), puVar4 = PTR_DAT_0676ad18,
       plVar8 == (long *)0x0)) goto LAB_0629b740;
    lVar14 = *plVar8;
    uVar7 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar7 != 0) {
      piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_0676ad18) {
          puVar10 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_0629b0ac;
        }
        uVar7 = uVar7 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar7 != 0);
    }
    puVar10 = (undefined8 *)FUN_02d9a5d4(plVar8,*(long *)PTR_DAT_0676ad18,0);
LAB_0629b0ac:
    uVar7 = (*(code *)*puVar10)(plVar8,puVar10[1]);
    if (((uVar7 & 1) == 0) &&
       ((*(int *)(param_2 + 0x6c) == 0x10f || (*(int *)(param_2 + 0x6c) == 0xd)))) {
      if ((*(long *)(param_1 + 0x10) == 0) ||
         (plVar8 = (long *)FUN_061f61c4(*(long *)(param_1 + 0x10),0), plVar8 == (long *)0x0))
      goto LAB_0629b740;
      lVar14 = *plVar8;
      uVar7 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar7 != 0) {
        piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
            puVar10 = (undefined8 *)(lVar14 + (long)(*piVar15 + 0x10) * 0x10 + 0x138);
            goto LAB_0629b1dc;
          }
          uVar7 = uVar7 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar7 != 0);
      }
      puVar10 = (undefined8 *)FUN_02d9a5d4(plVar8,*(long *)puVar4,0x10);
LAB_0629b1dc:
      lVar14 = (*(code *)*puVar10)(plVar8,puVar10[1]);
      if (lVar14 != 0) {
        (**(code **)(lVar14 + 0x18))(*(undefined8 *)(lVar14 + 0x40),*(undefined8 *)(lVar14 + 0x28));
      }
    }
    FUN_062e82ac(param_2,0);
    if ((*(long *)(param_1 + 0x10) == 0) ||
       (plVar8 = (long *)FUN_061f61c4(*(long *)(param_1 + 0x10),0), plVar8 == (long *)0x0))
    goto LAB_0629b740;
    lVar14 = *plVar8;
    uVar7 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar7 != 0) {
      piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
          puVar10 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_0629b270;
        }
        uVar7 = uVar7 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar7 != 0);
    }
    puVar10 = (undefined8 *)FUN_02d9a5d4(plVar8,*(long *)puVar4,0);
LAB_0629b270:
    uVar7 = (*(code *)*puVar10)(plVar8,puVar10[1]);
    uVar16 = (uint)uVar3;
    if ((uVar7 & 1) == 0) {
      if (((uVar16 != 10) && (uVar16 != 0xd)) ||
         (uVar7 = FUN_039136d4(param_2,*(undefined8 *)
                                        Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Vector3>__
                              ), (uVar7 & 1) != 0)) goto LAB_0629b2c8;
    }
    else if ((uVar16 != 10) ||
            (uVar7 = FUN_039136b0(param_2,*(undefined8 *)PTR_DAT_0676a938), (uVar7 & 1) == 0)) {
LAB_0629b2c8:
      if (*(int *)(param_2 + 0x6c) == 0x1b) {
        if ((*(long *)(param_1 + 0x10) == 0) ||
           (plVar8 = (long *)FUN_061f61c4(*(long *)(param_1 + 0x10),0), plVar8 == (long *)0x0))
        goto LAB_0629b740;
        lVar14 = *plVar8;
        uVar7 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar7 != 0) {
          piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
              puVar10 = (undefined8 *)(lVar14 + (long)(*piVar15 + 0xb) * 0x10 + 0x138);
              goto LAB_0629b394;
            }
            uVar7 = uVar7 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar7 != 0);
        }
        puVar10 = (undefined8 *)FUN_02d9a5d4(plVar8,*(long *)puVar4,0xb);
LAB_0629b394:
        (*(code *)*puVar10)(plVar8,puVar10[1]);
        if ((*(long *)(param_1 + 0x10) == 0) ||
           (plVar8 = (long *)FUN_061f61c4(*(long *)(param_1 + 0x10),0), plVar8 == (long *)0x0))
        goto LAB_0629b740;
        lVar14 = *plVar8;
        uVar7 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar7 != 0) {
          piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
              puVar10 = (undefined8 *)(lVar14 + (long)(*piVar15 + 0x10) * 0x10 + 0x138);
              goto LAB_0629b408;
            }
            uVar7 = uVar7 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar7 != 0);
        }
        puVar10 = (undefined8 *)FUN_02d9a5d4(plVar8,*(long *)puVar4,0x10);
LAB_0629b408:
        lVar14 = (*(code *)*puVar10)(plVar8,puVar10[1]);
        if (lVar14 != 0) {
          (**(code **)(lVar14 + 0x18))
                    (*(undefined8 *)(lVar14 + 0x40),*(undefined8 *)(lVar14 + 0x28));
        }
        if ((*(long *)(param_1 + 0x10) == 0) ||
           (plVar8 = (long *)FUN_061f61c4(*(long *)(param_1 + 0x10),0), plVar8 == (long *)0x0))
        goto LAB_0629b740;
        lVar14 = *plVar8;
        uVar7 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar7 != 0) {
          piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
              puVar10 = (undefined8 *)(lVar14 + (long)(*piVar15 + 0x14) * 0x10 + 0x138);
              goto LAB_0629b494;
            }
            uVar7 = uVar7 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar7 != 0);
        }
        puVar10 = (undefined8 *)FUN_02d9a5d4(plVar8,*(long *)puVar4,0x14);
LAB_0629b494:
        lVar14 = (*(code *)*puVar10)(plVar8,puVar10[1]);
        if (lVar14 != 0) {
          (**(code **)(lVar14 + 0x18))
                    (*(undefined8 *)(lVar14 + 0x40),*(undefined8 *)(lVar14 + 0x28));
        }
      }
      uVar1 = *(uint *)(param_2 + 0x6c);
      if (*(uint *)(param_2 + 0x6c) != 9) {
        uVar1 = uVar16;
      }
      if ((*(long *)(param_1 + 0x10) == 0) ||
         (plVar8 = (long *)FUN_061f61c4(*(long *)(param_1 + 0x10),0), plVar8 == (long *)0x0))
      goto LAB_0629b740;
      lVar14 = *plVar8;
      uVar7 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar7 != 0) {
        piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
            puVar10 = (undefined8 *)(lVar14 + (long)(*piVar15 + 0xc) * 0x10 + 0x138);
            goto LAB_0629b52c;
          }
          uVar7 = uVar7 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar7 != 0);
      }
      puVar10 = (undefined8 *)FUN_02d9a5d4(plVar8,*(long *)puVar4,0xc);
LAB_0629b52c:
      lVar14 = (*(code *)*puVar10)(plVar8,puVar10[1]);
      if (lVar14 == 0) goto LAB_0629b740;
      uVar7 = (**(code **)(lVar14 + 0x18))
                        (*(undefined8 *)(lVar14 + 0x40),uVar1,*(undefined8 *)(lVar14 + 0x28));
      if ((uVar7 & 1) == 0) {
        return;
      }
      if (((uVar1 & 0xffff) < 0x20) && (*(int *)(param_2 + 0x6c) != 9)) {
        if ((*(long *)(param_1 + 0x10) == 0) ||
           (plVar8 = (long *)FUN_061f61c4(*(long *)(param_1 + 0x10),0), plVar8 == (long *)0x0))
        goto LAB_0629b740;
        lVar14 = *plVar8;
        uVar7 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar7 != 0) {
          piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
              puVar10 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_0629b6a4;
            }
            uVar7 = uVar7 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar7 != 0);
        }
        puVar10 = (undefined8 *)FUN_02d9a5d4(plVar8,*(long *)puVar4,0);
LAB_0629b6a4:
        uVar7 = (*(code *)*puVar10)(plVar8,puVar10[1]);
        if (((uVar7 & 1) != 0) &&
           (uVar7 = FUN_039136d4(param_2,*(undefined8 *)
                                          Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Vector3>__
                                ), (uVar7 & 1) == 0)) {
          bVar13 = false;
          if (((uVar1 & 0xffff) == 10) || ((uVar1 & 0xffff) == 0xd)) goto LAB_0629b6e8;
        }
        bVar13 = true;
      }
      else {
        bVar13 = false;
      }
LAB_0629b6e8:
      lVar14 = *(long *)(param_1 + 0x18);
      if (lVar14 == 0) goto LAB_0629b740;
      if (!bVar13) {
        bVar5 = FUN_060d2a6c(lVar14,uVar1,0);
        uVar6 = 0;
        bVar5 = bVar5 & 1;
        *(byte *)(param_1 + 0x28) = bVar5;
        goto LAB_0629ae7c;
      }
      cVar2 = *(char *)(lVar14 + 0x24);
      uVar7 = FUN_060cfecc(lVar14,0);
      if ((uVar7 & 1) == 0) {
        if (*(long *)(param_1 + 0x18) == 0) goto LAB_0629b740;
        if (cVar2 == *(char *)(*(long *)(param_1 + 0x18) + 0x24)) goto LAB_0629ae74;
      }
      uVar6 = 1;
      *(undefined1 *)(param_1 + 0x28) = 1;
      goto LAB_0629ae80;
    }
    if ((*(long *)(param_1 + 0x10) == 0) ||
       (plVar8 = (long *)FUN_061f61c4(*(long *)(param_1 + 0x10),0), plVar8 == (long *)0x0))
    goto LAB_0629b740;
    lVar14 = *plVar8;
    uVar7 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar7 != 0) {
      piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
          puVar10 = (undefined8 *)(lVar14 + (long)(*piVar15 + 0x14) * 0x10 + 0x138);
          goto LAB_0629b588;
        }
        uVar7 = uVar7 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar7 != 0);
    }
    puVar10 = (undefined8 *)FUN_02d9a5d4(plVar8,*(long *)puVar4,0x14);
LAB_0629b588:
    lVar14 = (*(code *)*puVar10)(plVar8,puVar10[1]);
    if (lVar14 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0629b5b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar14 + 0x18))(*(undefined8 *)(lVar14 + 0x40),*(undefined8 *)(lVar14 + 0x28));
      return;
    }
  }
  else {
    plVar8 = *(long **)(param_1 + 0x10);
    if (plVar8 == (long *)0x0) goto LAB_0629b740;
    uVar9 = (**(code **)(*plVar8 + 0xde8))(plVar8,*(undefined8 *)(*plVar8 + 0xdf0));
    if (*(long *)(param_1 + 0x18) == 0) goto LAB_0629b740;
    uVar7 = FUN_04e8c024(uVar9,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x38),0);
    if ((uVar7 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x28) = 1;
    }
    FUN_062e82ac(param_2,0);
LAB_0629ae74:
    bVar5 = *(byte *)(param_1 + 0x28);
    uVar6 = uVar6 ^ 1;
LAB_0629ae7c:
    if (bVar5 != 0) {
LAB_0629ae80:
      FUN_0629bcf0(param_1,uVar6 & 1);
    }
    if ((*(long *)(param_1 + 0x10) == 0) ||
       (plVar8 = (long *)FUN_061f61c4(*(long *)(param_1 + 0x10),0), plVar8 == (long *)0x0)) {
LAB_0629b740:
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar14 = *plVar8;
    uVar7 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar7 != 0) {
      piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_0676ad18) {
          puVar10 = (undefined8 *)(lVar14 + (long)(*piVar15 + 0xe) * 0x10 + 0x138);
          goto LAB_0629afb8;
        }
        uVar7 = uVar7 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar7 != 0);
    }
    puVar10 = (undefined8 *)FUN_02d9a5d4(plVar8,*(long *)PTR_DAT_0676ad18,0xe);
LAB_0629afb8:
    lVar14 = (*(code *)*puVar10)(plVar8,puVar10[1]);
    if (lVar14 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0629aff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar14 + 0x18))
                (*(undefined8 *)(lVar14 + 0x40),*(int *)(param_2 + 0x6c) == 8,
                 *(undefined8 *)(lVar14 + 0x28));
      return;
    }
  }
  return;
}


