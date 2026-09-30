/*
FUNCTION_NAME: ES3Types.ES3Type_Quaternion$$Read<Quaternion>
ENTRY_POINT: 03cec328
PROGRAM: Waifu-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ray_interaction;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_3;ray_or_cast_sink_hits_21;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;negative_generic_transform_raycast_without_eye_source_or_attempt
*/


void ES3Types_ES3Type_Quaternion__Read<Quaternion>(undefined8 *param_1,uint param_2)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  long *unaff_x19;
  uint unaff_w20;
  uint unaff_w21;
  int unaff_w22;
  uint unaff_w23;
  uint unaff_w24;
  uint unaff_w26;
  uint unaff_w27;
  uint unaff_w28;
  uint unaff_w29;
  undefined8 uVar7;
  undefined4 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  
code_r0x03cec328:
  pcVar3 = (code *)param_1[0x1b];
  if ((code *)param_1[0x1b] == (code *)0x0) {
    DAT_086f10d8 = (code *)FUN_033d1b68(
                                       "UnityEngine.ParticleSystem/CollisionModule::set_quality_Injected(UnityEngine.ParticleSystem/CollisionModule&,UnityEngine.ParticleSystemCollisionQuality)"
                                       );
    pcVar3 = DAT_086f10d8;
  }
LAB_03ceca1c:
  (*pcVar3)(&stack0x00000088,param_2);
LAB_03cecb3c:
  lVar4 = (**(code **)(*unaff_x19 + 0x288))();
  if (lVar4 == 0) {
    return;
  }
  if ((int)*(uint *)(lVar4 + 0x10) < 1) goto LAB_03cecb28;
  lVar6 = 0;
  uVar5 = 0x811c9dc5;
  do {
    lVar1 = lVar4 + lVar6;
    lVar6 = lVar6 + 2;
    uVar5 = (uVar5 ^ *(ushort *)(lVar1 + 0x14)) * unaff_w22;
  } while ((ulong)*(uint *)(lVar4 + 0x10) * 2 - lVar6 != 0);
  if (unaff_w23 < uVar5) {
    if (unaff_w20 < uVar5) {
      if (unaff_w21 < uVar5) {
        if (uVar5 == unaff_w26) {
          uVar2 = FUN_0666e380(lVar4,DAT_08454ca0);
          if ((uVar2 & 1) != 0) {
            lVar4 = FUN_033c1aac(*(undefined8 *)
                                  (*unaff_x19 + (ulong)*(ushort *)(DAT_08408b90 + 0x50) * 0x10 +
                                  0x140));
            (**(code **)(lVar4 + 8))(&stack0x00000060);
            pcVar3 = DAT_086f1068;
            if (DAT_086f1068 == (code *)0x0) {
              pcVar3 = (code *)FUN_033d1b68(
                                           "UnityEngine.ParticleSystem/CollisionModule::set_lifetimeLoss_Injected(UnityEngine.ParticleSystem/CollisionModule&,UnityEngine.ParticleSystem/MinMaxCurve&)"
                                           );
              DAT_086f1068 = pcVar3;
            }
            goto LAB_03cecaac;
          }
        }
        else if (uVar5 == 0xeb1f3ece) {
          uVar2 = FUN_0666e380(lVar4,DAT_084505a8);
          if ((uVar2 & 1) != 0) {
            lVar4 = FUN_033c1aac(*(undefined8 *)
                                  (*unaff_x19 + (ulong)*(ushort *)(DAT_084089a8 + 0x50) * 0x10 +
                                  0x140));
            uVar7 = (**(code **)(lVar4 + 8))();
            pcVar3 = DAT_086f1058;
            if (DAT_086f1058 == (code *)0x0) {
              pcVar3 = (code *)FUN_033d1b68(
                                           "UnityEngine.ParticleSystem/CollisionModule::set_bounceMultiplier_Injected(UnityEngine.ParticleSystem/CollisionModule&,System.Single)"
                                           );
              DAT_086f1058 = pcVar3;
            }
            goto FUN_03cecb18;
          }
        }
        else if ((uVar5 == 0xec6ee012) &&
                (uVar2 = FUN_0666e380(lVar4,DAT_08455bd0), (uVar2 & 1) != 0)) {
          lVar4 = FUN_033c1aac(*(undefined8 *)
                                (*unaff_x19 + (ulong)*(ushort *)(DAT_084088d8 + 0x50) * 0x10 + 0x140
                                ));
          param_2 = (**(code **)(lVar4 + 8))();
          pcVar3 = DAT_086f1018;
          if (DAT_086f1018 == (code *)0x0) {
            pcVar3 = (code *)FUN_033d1b68(
                                         "UnityEngine.ParticleSystem/CollisionModule::set_mode_Injected(UnityEngine.ParticleSystem/CollisionModule&,UnityEngine.ParticleSystemCollisionMode)"
                                         );
            DAT_086f1018 = pcVar3;
          }
          goto LAB_03ceca1c;
        }
      }
      else if (uVar5 == 0xbcf3c8f4) {
        uVar2 = FUN_0666e380(lVar4,DAT_08451750);
        if ((uVar2 & 1) != 0) {
          lVar4 = FUN_033c1aac(*(undefined8 *)
                                (*unaff_x19 + (ulong)*(ushort *)(DAT_08408b90 + 0x50) * 0x10 + 0x140
                                ));
          (**(code **)(lVar4 + 8))(&stack0x00000060);
          pcVar3 = DAT_086f1028;
          if (DAT_086f1028 == (code *)0x0) {
            pcVar3 = (code *)FUN_033d1b68(
                                         "UnityEngine.ParticleSystem/CollisionModule::set_dampen_Injected(UnityEngine.ParticleSystem/CollisionModule&,UnityEngine.ParticleSystem/MinMaxCurve&)"
                                         );
            DAT_086f1028 = pcVar3;
          }
          goto LAB_03cecaac;
        }
      }
      else if ((uVar5 == unaff_w21) && (uVar2 = FUN_0666e380(lVar4,DAT_08450e28), (uVar2 & 1) != 0))
      {
        lVar4 = FUN_033c1aac(*(undefined8 *)
                              (*unaff_x19 + (ulong)*(ushort *)(DAT_08408860 + 0x50) * 0x10 + 0x140))
        ;
        in_stack_00000060 = (**(code **)(lVar4 + 8))();
        pcVar3 = DAT_086f10a8;
        if (DAT_086f10a8 == (code *)0x0) {
          pcVar3 = (code *)FUN_033d1b68(
                                       "UnityEngine.ParticleSystem/CollisionModule::set_collidesWith_Injected(UnityEngine.ParticleSystem/CollisionModule&,UnityEngine.LayerMask&)"
                                       );
          DAT_086f10a8 = pcVar3;
        }
LAB_03cecaac:
        (*pcVar3)(&stack0x00000088);
        goto LAB_03cecb3c;
      }
    }
    else if (unaff_w28 < uVar5) {
      if (uVar5 == 0x9d73b971) {
        uVar2 = FUN_0666e380(lVar4,DAT_08458018);
        if ((uVar2 & 1) != 0) {
          lVar4 = FUN_033c1aac(*(undefined8 *)
                                (*unaff_x19 + (ulong)*(ushort *)(DAT_084087d8 + 0x50) * 0x10 + 0x140
                                ));
          param_2 = (**(code **)(lVar4 + 8))();
          pcVar3 = DAT_086f1108;
          if (DAT_086f1108 == (code *)0x0) {
            pcVar3 = (code *)FUN_033d1b68(
                                         "UnityEngine.ParticleSystem/CollisionModule::set_sendCollisionMessages_Injected(UnityEngine.ParticleSystem/CollisionModule&,System.Boolean)"
                                         );
            DAT_086f1108 = pcVar3;
          }
          goto LAB_03cec93c;
        }
      }
      else if ((uVar5 == unaff_w20) && (uVar2 = FUN_0666e380(lVar4,DAT_08454ca8), (uVar2 & 1) != 0))
      {
        lVar4 = FUN_033c1aac(*(undefined8 *)
                              (*unaff_x19 + (ulong)*(ushort *)(DAT_084089a8 + 0x50) * 0x10 + 0x140))
        ;
        uVar7 = (**(code **)(lVar4 + 8))();
        pcVar3 = DAT_086f1078;
        if (DAT_086f1078 == (code *)0x0) {
          pcVar3 = (code *)FUN_033d1b68(
                                       "UnityEngine.ParticleSystem/CollisionModule::set_lifetimeLossMultiplier_Injected(UnityEngine.ParticleSystem/CollisionModule&,System.Single)"
                                       );
          DAT_086f1078 = pcVar3;
        }
        goto FUN_03cecb18;
      }
    }
    else {
      if (uVar5 == 0x978234ae) {
        uVar2 = FUN_0666e380(lVar4,DAT_0845a448);
        if ((uVar2 & 1) != 0) {
          lVar4 = FUN_033c1aac(*(undefined8 *)
                                (*unaff_x19 + (ulong)*(ushort *)(DAT_084089a8 + 0x50) * 0x10 + 0x140
                                ));
          uVar7 = (**(code **)(lVar4 + 8))();
          pcVar3 = DAT_086f10e8;
          if (DAT_086f10e8 == (code *)0x0) {
            pcVar3 = (code *)FUN_033d1b68(
                                         "UnityEngine.ParticleSystem/CollisionModule::set_voxelSize_Injected(UnityEngine.ParticleSystem/CollisionModule&,System.Single)"
                                         );
            DAT_086f10e8 = pcVar3;
          }
          goto FUN_03cecb18;
        }
        goto LAB_03cecb28;
      }
      if ((uVar5 == unaff_w28) && (uVar2 = FUN_0666e380(lVar4,DAT_08457340), (uVar2 & 1) != 0)) {
        lVar4 = FUN_033c1aac(*(undefined8 *)
                              (*unaff_x19 + (ulong)*(ushort *)(DAT_084088e0 + 0x50) * 0x10 + 0x140))
        ;
        param_2 = (**(code **)(lVar4 + 8))();
        param_1 = &DAT_086f1000;
        goto code_r0x03cec328;
      }
    }
  }
  else if (unaff_w24 < uVar5) {
    if (unaff_w27 < uVar5) {
      if (uVar5 == 0x910902f8) {
        uVar2 = FUN_0666e380(lVar4,DAT_084555b8);
        if ((uVar2 & 1) == 0) goto LAB_03cecb28;
        lVar4 = FUN_033c1aac(*(undefined8 *)
                              (*unaff_x19 + (ulong)*(ushort *)(DAT_084089a8 + 0x50) * 0x10 + 0x140))
        ;
        uVar7 = (**(code **)(lVar4 + 8))();
        pcVar3 = DAT_086f1098;
        if (DAT_086f1098 == (code *)0x0) {
          pcVar3 = (code *)FUN_033d1b68(
                                       "UnityEngine.ParticleSystem/CollisionModule::set_maxKillSpeed_Injected(UnityEngine.ParticleSystem/CollisionModule&,System.Single)"
                                       );
          DAT_086f1098 = pcVar3;
        }
FUN_03cecb18:
        (*pcVar3)(uVar7,&stack0x00000088);
        goto LAB_03cecb3c;
      }
      if (uVar5 == unaff_w23) {
        uVar2 = FUN_0666e380(lVar4,DAT_08455570);
        if ((uVar2 & 1) == 0) goto LAB_03cecb28;
        lVar4 = FUN_033c1aac(*(undefined8 *)
                              (*unaff_x19 + (ulong)*(ushort *)(DAT_08408858 + 0x50) * 0x10 + 0x140))
        ;
        param_2 = (**(code **)(lVar4 + 8))();
        pcVar3 = DAT_086f10c8;
        if (DAT_086f10c8 == (code *)0x0) {
          pcVar3 = (code *)FUN_033d1b68(
                                       "UnityEngine.ParticleSystem/CollisionModule::set_maxCollisionShapes_Injected(UnityEngine.ParticleSystem/CollisionModule&,System.Int32)"
                                       );
          DAT_086f10c8 = pcVar3;
        }
        goto LAB_03ceca1c;
      }
      if ((uVar5 == 0x6ba4556b) && (uVar2 = FUN_0666e380(lVar4,DAT_084573f0), (uVar2 & 1) != 0)) {
        lVar4 = FUN_033c1aac(*(undefined8 *)
                              (*unaff_x19 + (ulong)*(ushort *)(DAT_084089a8 + 0x50) * 0x10 + 0x140))
        ;
        uVar7 = (**(code **)(lVar4 + 8))();
        pcVar3 = DAT_086f10f8;
        if (DAT_086f10f8 == (code *)0x0) {
          pcVar3 = (code *)FUN_033d1b68(
                                       "UnityEngine.ParticleSystem/CollisionModule::set_radiusScale_Injected(UnityEngine.ParticleSystem/CollisionModule&,System.Single)"
                                       );
          DAT_086f10f8 = pcVar3;
        }
        goto FUN_03cecb18;
      }
    }
    else {
      if (uVar5 == 0x5127f14d) {
        uVar2 = FUN_0666e380(lVar4,DAT_084596f0);
        if ((uVar2 & 1) == 0) goto LAB_03cecb28;
        lVar4 = FUN_033c1aac(*(undefined8 *)
                              (*unaff_x19 + (ulong)*(ushort *)(DAT_084088e8 + 0x50) * 0x10 + 0x140))
        ;
        param_2 = (**(code **)(lVar4 + 8))();
        pcVar3 = DAT_086f1008;
        if (DAT_086f1008 == (code *)0x0) {
          pcVar3 = (code *)FUN_033d1b68(
                                       "UnityEngine.ParticleSystem/CollisionModule::set_type_Injected(UnityEngine.ParticleSystem/CollisionModule&,UnityEngine.ParticleSystemCollisionType)"
                                       );
          DAT_086f1008 = pcVar3;
        }
        goto LAB_03ceca1c;
      }
      if ((uVar5 == unaff_w27) && (uVar2 = FUN_0666e380(lVar4,DAT_08455a00), (uVar2 & 1) != 0)) {
        lVar4 = FUN_033c1aac(*(undefined8 *)
                              (*unaff_x19 + (ulong)*(ushort *)(DAT_084089a8 + 0x50) * 0x10 + 0x140))
        ;
        uVar7 = (**(code **)(lVar4 + 8))();
        pcVar3 = DAT_086f1088;
        if (DAT_086f1088 == (code *)0x0) {
          pcVar3 = (code *)FUN_033d1b68(
                                       "UnityEngine.ParticleSystem/CollisionModule::set_minKillSpeed_Injected(UnityEngine.ParticleSystem/CollisionModule&,System.Single)"
                                       );
          DAT_086f1088 = pcVar3;
        }
        goto FUN_03cecb18;
      }
    }
  }
  else {
    if (uVar5 <= unaff_w29) {
      if (uVar5 == 0x2f3b39e) {
        uVar2 = FUN_0666e380(lVar4,DAT_08452338);
        if ((uVar2 & 1) != 0) {
          lVar4 = FUN_033c1aac(*(undefined8 *)
                                (*unaff_x19 + (ulong)*(ushort *)(DAT_084087d8 + 0x50) * 0x10 + 0x140
                                ));
          param_2 = (**(code **)(lVar4 + 8))();
          pcVar3 = DAT_086f0ff8;
          if (DAT_086f0ff8 == (code *)0x0) {
            pcVar3 = (code *)FUN_033d1b68(
                                         "UnityEngine.ParticleSystem/CollisionModule::set_enabled_Injected(UnityEngine.ParticleSystem/CollisionModule&,System.Boolean)"
                                         );
            DAT_086f0ff8 = pcVar3;
          }
          goto LAB_03cec93c;
        }
        goto LAB_03cecb28;
      }
      if ((uVar5 != unaff_w29) || (uVar2 = FUN_0666e380(lVar4,DAT_08452320), (uVar2 & 1) == 0))
      goto LAB_03cecb28;
      lVar4 = FUN_033c1aac(*(undefined8 *)
                            (*unaff_x19 + (ulong)*(ushort *)(DAT_084087d8 + 0x50) * 0x10 + 0x140));
      param_2 = (**(code **)(lVar4 + 8))();
      pcVar3 = DAT_086f10b8;
      if (DAT_086f10b8 == (code *)0x0) {
        pcVar3 = (code *)FUN_033d1b68(
                                     "UnityEngine.ParticleSystem/CollisionModule::set_enableDynamicColliders_Injected(UnityEngine.ParticleSystem/CollisionModule&,System.Boolean)"
                                     );
        DAT_086f10b8 = pcVar3;
      }
LAB_03cec93c:
      param_2 = param_2 & 1;
      goto LAB_03ceca1c;
    }
    if (uVar5 == 0x21fdde8b) {
      uVar2 = FUN_0666e380(lVar4,DAT_08451758);
      if ((uVar2 & 1) != 0) {
        lVar4 = FUN_033c1aac(*(undefined8 *)
                              (*unaff_x19 + (ulong)*(ushort *)(DAT_084089a8 + 0x50) * 0x10 + 0x140))
        ;
        uVar7 = (**(code **)(lVar4 + 8))();
        pcVar3 = DAT_086f1038;
        if (DAT_086f1038 == (code *)0x0) {
          pcVar3 = (code *)FUN_033d1b68(
                                       "UnityEngine.ParticleSystem/CollisionModule::set_dampenMultiplier_Injected(UnityEngine.ParticleSystem/CollisionModule&,System.Single)"
                                       );
          DAT_086f1038 = pcVar3;
        }
        goto FUN_03cecb18;
      }
    }
    else if ((uVar5 == unaff_w24) && (uVar2 = FUN_0666e380(lVar4,DAT_08450590), (uVar2 & 1) != 0)) {
      lVar4 = FUN_033c1aac(*(undefined8 *)
                            (*unaff_x19 + (ulong)*(ushort *)(DAT_08408b90 + 0x50) * 0x10 + 0x140));
      (**(code **)(lVar4 + 8))(&stack0x00000060);
      pcVar3 = DAT_086f1048;
      if (DAT_086f1048 == (code *)0x0) {
        pcVar3 = (code *)FUN_033d1b68(
                                     "UnityEngine.ParticleSystem/CollisionModule::set_bounce_Injected(UnityEngine.ParticleSystem/CollisionModule&,UnityEngine.ParticleSystem/MinMaxCurve&)"
                                     );
        DAT_086f1048 = pcVar3;
      }
      goto LAB_03cecaac;
    }
  }
LAB_03cecb28:
  (**(code **)(*unaff_x19 + 0x3c8))();
  goto LAB_03cecb3c;
}


