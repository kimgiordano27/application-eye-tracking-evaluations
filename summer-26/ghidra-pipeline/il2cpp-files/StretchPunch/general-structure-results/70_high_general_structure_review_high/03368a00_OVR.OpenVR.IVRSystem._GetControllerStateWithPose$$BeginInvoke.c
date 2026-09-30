/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetControllerStateWithPose$$BeginInvoke
ENTRY_POINT: 03368a00
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


undefined8 OVR_OpenVR_IVRSystem__GetControllerStateWithPose__BeginInvoke(void)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long unaff_x19;
  long unaff_x20;
  
  FUN_01d7d918();
  FUN_01d7d918(StringLiteral_7854);
  FUN_01d7d918(StringLiteral_7855);
  FUN_01d7d918(StringLiteral_7856);
  FUN_01d7d918(StringLiteral_7857);
  FUN_01d7d918(StringLiteral_7858);
  FUN_01d7d918(StringLiteral_7859);
  FUN_01d7d918(StringLiteral_7860);
  FUN_01d7d918(StringLiteral_7861);
  FUN_01d7d918(StringLiteral_7862);
  FUN_01d7d918(StringLiteral_7863);
  FUN_01d7d918(StringLiteral_7864);
  FUN_01d7d918(StringLiteral_7865);
  FUN_01d7d918(StringLiteral_7866);
  FUN_01d7d918(StringLiteral_7867);
  FUN_01d7d918(StringLiteral_7868);
  FUN_01d7d918(StringLiteral_7869);
  FUN_01d7d918(StringLiteral_7870);
  FUN_01d7d918(StringLiteral_7871);
  FUN_01d7d918(StringLiteral_7872);
  FUN_01d7d918(StringLiteral_7873);
  FUN_01d7d918(StringLiteral_7874);
  FUN_01d7d918(StringLiteral_7875);
  FUN_01d7d918(StringLiteral_7876);
  FUN_01d7d918(StringLiteral_5964);
  FUN_01d7d918(StringLiteral_7877);
  FUN_01d7d918(StringLiteral_7878);
  FUN_01d7d918(StringLiteral_7879);
  FUN_01d7d918(StringLiteral_7880);
  FUN_01d7d918(StringLiteral_7881);
  FUN_01d7d918(StringLiteral_7882);
  FUN_01d7d918(StringLiteral_7883);
  FUN_01d7d918(StringLiteral_7884);
  FUN_01d7d918(StringLiteral_7885);
  FUN_01d7d918(StringLiteral_7886);
  FUN_01d7d918(StringLiteral_7887);
  FUN_01d7d918(StringLiteral_7888);
  FUN_01d7d918(StringLiteral_7889);
  FUN_01d7d918(StringLiteral_7890);
  FUN_01d7d918(StringLiteral_7891);
  FUN_01d7d918(StringLiteral_7892);
  FUN_01d7d918(StringLiteral_7893);
  FUN_01d7d918(StringLiteral_7894);
  FUN_01d7d918(StringLiteral_7281);
  FUN_01d7d918(StringLiteral_7895);
  FUN_01d7d918(StringLiteral_7896);
  FUN_01d7d918(StringLiteral_7897);
  FUN_01d7d918(StringLiteral_7898);
  FUN_01d7d918(StringLiteral_7899);
  FUN_01d7d918(StringLiteral_7900);
  FUN_01d7d918(StringLiteral_7901);
  FUN_01d7d918(StringLiteral_7902);
  FUN_01d7d918(StringLiteral_7903);
  FUN_01d7d918(StringLiteral_7904);
  FUN_01d7d918(StringLiteral_7905);
  FUN_01d7d918(StringLiteral_7906);
  *(undefined1 *)(unaff_x20 + 0x602) = 1;
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  uVar2 = FUN_0327d284();
  uVar1 = FUN_03379100(uVar2,0);
  if (uVar1 < 0x502987b2) {
    if (0x434549b7 < uVar1) {
      if (0x48521d89 < uVar1) {
        if (uVar1 < 0x4c20870a) {
          if (uVar1 < 0x4963683e) {
            if (uVar1 < 0x4924ff7f) {
              if (uVar1 == 0x48545c20) {
                uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7870,0);
                if ((uVar3 & 1) == 0) goto LAB_0336acb0;
                uVar2 = 0x419;
              }
              else {
                if ((uVar1 != 0x4924ff7e) ||
                   (uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7883,0),
                   (uVar3 & 1) == 0)) goto LAB_0336acb0;
                uVar2 = 0x436;
              }
            }
            else if (uVar1 == 0x49521f1c) {
              uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7856,0);
              if ((uVar3 & 1) == 0) goto LAB_0336acb0;
              uVar2 = 0x41d;
            }
            else {
              if ((uVar1 != 0x4963683d) ||
                 (uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7801,0),
                 (uVar3 & 1) == 0)) goto LAB_0336acb0;
              uVar2 = 0x434;
            }
            goto FUN_0336ac7c;
          }
          if (0x4a5220af < uVar1) {
            if (uVar1 == 0x4a545f46) {
              uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7814,0);
              if ((uVar3 & 1) == 0) goto LAB_0336acb0;
              uVar2 = 0x487;
            }
            else if (uVar1 == 0x4b1cb3df) {
              uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7789,0);
              if ((uVar3 & 1) == 0) goto LAB_0336acb0;
              uVar2 = 0x465;
            }
            else {
              if ((uVar1 != 0x4c208709) ||
                 (uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7843,0),
                 (uVar3 & 1) == 0)) goto LAB_0336acb0;
              uVar2 = 0x447;
            }
            goto FUN_0336ac7c;
          }
          puVar5 = (undefined8 *)StringLiteral_7860;
          if (uVar1 != 0x49c9fb2c) {
            if ((uVar1 != 0x4a5220af) ||
               (uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7840,0),
               (uVar3 & 1) == 0)) goto LAB_0336acb0;
            uVar2 = 0x441;
            goto FUN_0336ac7c;
          }
        }
        else {
          if (0x4d455975 < uVar1) {
            if (0x4e388f15 < uVar1) {
              if (uVar1 == 0x4f2bc4b5) {
                uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7804,0);
                if ((uVar3 & 1) == 0) goto LAB_0336acb0;
                uVar2 = 0x47e;
              }
              else if (uVar1 == 0x4f3acf3f) {
                uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7849,0);
                if ((uVar3 & 1) == 0) goto LAB_0336acb0;
                uVar2 = 0x41a;
              }
              else {
                if ((uVar1 != 0x502987b1) ||
                   (uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7797,0),
                   (uVar3 & 1) == 0)) goto LAB_0336acb0;
                uVar2 = 0x452;
              }
              goto FUN_0336ac7c;
            }
            puVar5 = (undefined8 *)StringLiteral_7791;
            if (uVar1 != 0x4e2bc322) {
              if ((uVar1 != 0x4e388f15) ||
                 (uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7872,0),
                 (uVar3 & 1) == 0)) goto LAB_0336acb0;
              uVar2 = 0x40f;
              goto FUN_0336ac7c;
            }
LAB_0336a604:
            uVar3 = thunk_FUN_03278f50(uVar2,*puVar5,0);
            if ((uVar3 & 1) == 0) goto LAB_0336acb0;
            uVar2 = 0x141a;
            goto FUN_0336ac7c;
          }
          if (uVar1 < 0x4c3aca87) {
            if (uVar1 == 0x4c22c5a0) {
              uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7893,0);
              if ((uVar3 & 1) == 0) goto LAB_0336acb0;
              uVar2 = 0x462;
            }
            else {
              if ((uVar1 != 0x4c3aca86) ||
                 (uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7794,0),
                 (uVar3 & 1) == 0)) goto LAB_0336acb0;
              uVar2 = 0x40e;
            }
            goto FUN_0336ac7c;
          }
          puVar5 = (undefined8 *)StringLiteral_7892;
          if (uVar1 != 0x4d431ade) {
            if ((uVar1 != 0x4d455975) ||
               (uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7864,0),
               (uVar3 & 1) == 0)) goto LAB_0336acb0;
            uVar2 = 0x444;
            goto FUN_0336ac7c;
          }
        }
        uVar3 = thunk_FUN_03278f50(uVar2,*puVar5,0);
        if ((uVar3 & 1) == 0) goto LAB_0336acb0;
        uVar2 = 0x443;
        goto FUN_0336ac7c;
      }
      if (0x462977f3 < uVar1) {
        if (uVar1 < 0x47455004) {
          if (uVar1 < 0x4731c84c) {
            if (uVar1 == 0x471a6efc) {
              uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7879,0);
              if ((uVar3 & 1) == 0) goto LAB_0336acb0;
              uVar2 = 0x425;
            }
            else {
              if ((uVar1 != 0x4731c84b) ||
                 (uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7786,0),
                 (uVar3 & 1) == 0)) goto LAB_0336acb0;
              uVar2 = 0x46e;
            }
          }
          else if (uVar1 == 0x47388410) {
            uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7790,0);
            if ((uVar3 & 1) == 0) goto LAB_0336acb0;
            uVar2 = 0x410;
          }
          else {
            if ((uVar1 != 0x47455003) ||
               (uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7251,0),
               (uVar3 & 1) == 0)) goto LAB_0336acb0;
            uVar2 = 0x41f;
          }
          goto FUN_0336ac7c;
        }
        if (uVar1 < 0x4833569a) {
          if (uVar1 == 0x481a708f) {
            uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7019,0);
            if ((uVar3 & 1) == 0) goto LAB_0336acb0;
            uVar2 = 0x42d;
          }
          else {
            if ((uVar1 != 0x48335699) ||
               (uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7819,0),
               (uVar3 & 1) == 0)) goto LAB_0336acb0;
            uVar2 = 0x45d;
          }
          goto FUN_0336ac7c;
        }
        puVar5 = (undefined8 *)StringLiteral_7904;
        if (uVar1 != 0x483885a3) {
          if (uVar1 == 0x483d02d1) {
            uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7813,0);
            if ((uVar3 & 1) == 0) goto LAB_0336acb0;
            uVar2 = 0x437;
          }
          else {
            if ((uVar1 != 0x48521d89) ||
               (uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7017,0),
               (uVar3 & 1) == 0)) goto LAB_0336acb0;
            uVar2 = 0x41c;
          }
          goto FUN_0336ac7c;
        }
LAB_0336aaf0:
        uVar3 = thunk_FUN_03278f50(uVar2,*puVar5,0);
        if ((uVar3 & 1) == 0) goto LAB_0336acb0;
        uVar2 = 0x85d;
        goto FUN_0336ac7c;
      }
      if (uVar1 < 0x45430e47) {
        if (uVar1 < 0x44387f58) {
          if (uVar1 == 0x435215aa) {
            uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7873,0);
            if ((uVar3 & 1) == 0) goto LAB_0336acb0;
            uVar2 = 0x424;
          }
          else {
            if ((uVar1 != 0x44387f57) ||
               (uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7809,0),
               (uVar3 & 1) == 0)) goto LAB_0336acb0;
            uVar2 = 0x478;
          }
        }
        else if (uVar1 == 0x443cfc85) {
          uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7826,0);
          if ((uVar3 & 1) == 0) goto LAB_0336acb0;
          uVar2 = 0x453;
        }
        else {
          if ((uVar1 != 0x45430e46) ||
             (uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7881,0),
             (uVar3 & 1) == 0)) goto LAB_0336acb0;
          uVar2 = 0x420;
        }
        goto FUN_0336ac7c;
      }
      if (uVar1 < 0x455218d1) {
        if (uVar1 == 0x454e4739) {
          uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7880,0);
          if ((uVar3 & 1) != 0) {
            uVar2 = 0x415;
            goto FUN_0336ac7c;
          }
          goto LAB_0336acb0;
        }
        puVar5 = (undefined8 *)StringLiteral_7836;
        if (uVar1 != 0x455218d0) goto LAB_0336acb0;
LAB_0336a0a0:
        uVar3 = thunk_FUN_03278f50(uVar2,*puVar5,0);
        if ((uVar3 & 1) == 0) goto LAB_0336acb0;
        uVar2 = 0x241a;
        goto FUN_0336ac7c;
      }
      puVar5 = (undefined8 *)StringLiteral_7281;
      if (uVar1 != 0x4567df1f) {
        if (uVar1 == 0x461a6d69) {
          uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7831,0);
          if ((uVar3 & 1) == 0) goto LAB_0336acb0;
          uVar2 = 0xc0a;
        }
        else {
          if ((uVar1 != 0x462977f3) ||
             (uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7853,0),
             (uVar3 & 1) == 0)) goto LAB_0336acb0;
          uVar2 = 0x405;
        }
        goto FUN_0336ac7c;
      }
FUN_0336ab44:
      uVar3 = thunk_FUN_03278f50(uVar2,*puVar5,0);
      if ((uVar3 & 1) == 0) goto LAB_0336acb0;
      uVar2 = 0x804;
      goto FUN_0336ac7c;
    }
    if (0x3d1e7e08 < uVar1) {
      if (uVar1 < 0x411a658b) {
        if (uVar1 < 0x3f1a6265) {
          if (uVar1 < 0x3e4541d9) {
            if (uVar1 == 0x3e3cf313) {
              uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7885,0);
              if ((uVar3 & 1) == 0) goto LAB_0336acb0;
              uVar2 = 0x43f;
            }
            else {
              if ((uVar1 != 0x3e4541d8) ||
                 (uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7822,0),
                 (uVar3 & 1) == 0)) goto LAB_0336acb0;
              uVar2 = 0x442;
            }
          }
          else if (uVar1 == 0x3e520dcb) {
            uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7837,0);
            if ((uVar3 & 1) == 0) goto LAB_0336acb0;
            uVar2 = 0x41b;
          }
          else {
            if ((uVar1 != 0x3f1a6264) ||
               (uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7808,0),
               (uVar3 & 1) == 0)) goto LAB_0336acb0;
            uVar2 = 0x408;
          }
        }
        else if (uVar1 < 0x4024f154) {
          if (uVar1 == 0x40207425) {
            uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7865,0);
            if ((uVar3 & 1) == 0) goto LAB_0336acb0;
            uVar2 = 0x83c;
          }
          else {
            if ((uVar1 != 0x4024f153) ||
               (uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7855,0),
               (uVar3 & 1) == 0)) goto LAB_0336acb0;
            uVar2 = 0x45e;
          }
        }
        else if (uVar1 == 0x405210f1) {
          uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7900,0);
          if ((uVar3 & 1) == 0) goto LAB_0336acb0;
          uVar2 = 0x45b;
        }
        else if (uVar1 == 0x40d59ee7) {
          uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7877,0);
          if ((uVar3 & 1) == 0) goto LAB_0336acb0;
          uVar2 = 0x82c;
        }
        else {
          if ((uVar1 != 0x411a658a) ||
             (uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7875,0),
             (uVar3 & 1) == 0)) goto LAB_0336acb0;
          uVar2 = 0x409;
        }
      }
      else {
        if (0x4231c06c < uVar1) {
          if (uVar1 < 0x432078df) {
            if (uVar1 == 0x423cf95f) {
              uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_4375,0);
              if ((uVar3 & 1) == 0) goto LAB_0336acb0;
              uVar2 = 0x412;
            }
            else {
              if ((uVar1 != 0x432078de) ||
                 (uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7799,0),
                 (uVar3 & 1) == 0)) goto LAB_0336acb0;
              uVar2 = 0x456;
            }
          }
          else if (uVar1 == 0x432bb1d1) {
            uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7833,0);
            if ((uVar3 & 1) == 0) goto LAB_0336acb0;
            uVar2 = 0x445;
          }
          else if (uVar1 == 0x433cfaf2) {
            uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7829,0);
            if ((uVar3 & 1) == 0) goto LAB_0336acb0;
            uVar2 = 0x46f;
          }
          else {
            if ((uVar1 != 0x434549b7) ||
               (uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7779,0),
               (uVar3 & 1) == 0)) goto LAB_0336acb0;
            uVar2 = 0x432;
          }
          goto FUN_0336ac7c;
        }
        if (uVar1 < 0x41454692) {
          if (uVar1 == 0x413cf7cc) {
            uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7897,0);
            if ((uVar3 & 1) == 0) goto LAB_0336acb0;
            uVar2 = 1099;
          }
          else {
            if ((uVar1 != 0x41454691) ||
               (uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7798,0),
               (uVar3 & 1) == 0)) goto LAB_0336acb0;
            uVar2 = 0x41e;
          }
        }
        else if (uVar1 == 0x422bb03e) {
          uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7785,0);
          if ((uVar3 & 1) == 0) goto LAB_0336acb0;
          uVar2 = 0x451;
        }
        else {
          if ((uVar1 != 0x4231c06c) ||
             (uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7777,0),
             (uVar3 & 1) == 0)) goto LAB_0336acb0;
          uVar2 = 0x454;
        }
      }
      goto FUN_0336ac7c;
    }
    if (0x3a2ba3a6 < uVar1) {
      if (uVar1 < 0x3b68333b) {
        if (0x3a453b8c < uVar1) {
          if (uVar1 == 0x3b206c46) {
            uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7838,0);
            if ((uVar3 & 1) == 0) goto LAB_0336acb0;
            uVar2 = 0x491;
          }
          else {
            if ((uVar1 != 0x3b68333a) ||
               (uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7839,0),
               (uVar3 & 1) == 0)) goto LAB_0336acb0;
            uVar2 = 0x850;
          }
          goto FUN_0336ac7c;
        }
        if (uVar1 == 0x3a386f99) {
          uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7850,0);
          if ((uVar3 & 1) != 0) {
            uVar2 = 0x470;
            goto FUN_0336ac7c;
          }
          goto LAB_0336acb0;
        }
        puVar5 = (undefined8 *)StringLiteral_7846;
        if (uVar1 != 0x3a453b8c) goto LAB_0336acb0;
LAB_0336a658:
        uVar3 = thunk_FUN_03278f50(uVar2,*puVar5,0);
        if ((uVar3 & 1) == 0) goto LAB_0336acb0;
        uVar2 = 0x428;
        goto FUN_0336ac7c;
      }
      if (uVar1 < 0x3c453eb3) {
        if (uVar1 == 0x3c2ba6cc) {
          uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7802,0);
          if ((uVar3 & 1) == 0) goto LAB_0336acb0;
          uVar2 = 0x46d;
        }
        else {
          if ((uVar1 != 0x3c453eb2) ||
             (uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7828,0),
             (uVar3 & 1) == 0)) goto LAB_0336acb0;
          uVar2 = 0x44a;
        }
        goto FUN_0336ac7c;
      }
      if (uVar1 == 0x3c49bbe0) {
        uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7841,0);
        if ((uVar3 & 1) != 0) {
          uVar2 = 0x42a;
          goto FUN_0336ac7c;
        }
        goto LAB_0336acb0;
      }
      if (uVar1 == 0x3c520aa5) {
        uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7858,0);
        if ((uVar3 & 1) != 0) {
          uVar2 = 0x43b;
          goto FUN_0336ac7c;
        }
        goto LAB_0336acb0;
      }
      puVar5 = (undefined8 *)StringLiteral_7781;
      if (uVar1 != 0x3d1e7e08) goto LAB_0336acb0;
LAB_03369fa4:
      uVar3 = thunk_FUN_03278f50(uVar2,*puVar5,0);
      if ((uVar3 & 1) == 0) goto LAB_0336acb0;
      uVar2 = 0x85f;
      goto FUN_0336ac7c;
    }
    if (0x37386ae0 < uVar1) {
      if (uVar1 < 0x38453867) {
        if (uVar1 == 0x382ba080) {
          uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7862,0);
          if ((uVar3 & 1) == 0) goto LAB_0336acb0;
          uVar2 = 0x423;
        }
        else {
          if ((uVar1 != 0x38453866) ||
             (uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7851,0),
             (uVar3 & 1) == 0)) goto LAB_0336acb0;
          uVar2 = 0x449;
        }
      }
      else if (uVar1 == 0x38520459) {
        uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7807,0);
        if ((uVar3 & 1) == 0) goto LAB_0336acb0;
        uVar2 = 0x44f;
      }
      else {
        if ((uVar1 != 0x3a2ba3a6) ||
           (uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7848,0), (uVar3 & 1) == 0)
           ) goto LAB_0336acb0;
        uVar2 = 0x402;
      }
      goto FUN_0336ac7c;
    }
    if (uVar1 < 0x356f22fd) {
      if (uVar1 == 0x106c50ab) {
        uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7827,0);
        if ((uVar3 & 1) == 0) goto LAB_0336acb0;
        uVar2 = 0x46c;
      }
      else {
        if ((uVar1 != 0x356f22fc) ||
           (uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7803,0), (uVar3 & 1) == 0)
           ) goto LAB_0336acb0;
        uVar2 = 0x47a;
      }
      goto FUN_0336ac7c;
    }
    puVar5 = (undefined8 *)StringLiteral_7806;
    if (uVar1 != 0x3729c4a7) {
      if ((uVar1 != 0x37386ae0) ||
         (uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_1849,0), (uVar3 & 1) == 0))
      goto LAB_0336acb0;
      uVar2 = 0x421;
      goto FUN_0336ac7c;
    }
LAB_0336abb0:
    uVar3 = thunk_FUN_03278f50(uVar2,*puVar5,0);
    if ((uVar3 & 1) == 0) {
LAB_0336acb0:
      thunk_FUN_01dd295c(StringLiteral_7907);
      uVar2 = FUN_0326dc80();
      thunk_FUN_01dd295c(
                        Field_UnityEngine_InputSystem_Utilities_InputActionTrace_ActionEventPtr_m_State
                        );
      uVar4 = thunk_FUN_01de27b8();
      FUN_03395b60(uVar4,uVar2,0);
      uVar2 = thunk_FUN_01dd295c(StringLiteral_7908);
                    /* WARNING: Subroutine does not return */
      FUN_01d7da3c(uVar4,uVar2);
    }
    uVar2 = 0x450;
  }
  else {
    if (uVar1 < 0x6222e843) {
      if (0x5c1ccea2 < uVar1) {
        if (uVar1 < 0x5e25208e) {
          if (0x5c7ad43c < uVar1) {
            if (uVar1 < 0x5d31eaee) {
              if (uVar1 == 0x5d251efa) {
                uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7842,0);
                if ((uVar3 & 1) == 0) goto LAB_0336acb0;
                uVar2 = 0x401;
              }
              else {
                if ((uVar1 != 0x5d31eaed) ||
                   (uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_4324,0),
                   (uVar3 & 1) == 0)) goto LAB_0336acb0;
                uVar2 = 0x427;
              }
            }
            else if (uVar1 == 0x5d342984) {
              uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7884,0);
              if ((uVar3 & 1) == 0) goto LAB_0336acb0;
              uVar2 = 0x448;
            }
            else if (uVar1 == 0x5d4e6d01) {
              uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7788,0);
              if ((uVar3 & 1) == 0) goto LAB_0336acb0;
              uVar2 = 0x416;
            }
            else {
              if ((uVar1 != 0x5e25208d) ||
                 (uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7783,0),
                 (uVar3 & 1) == 0)) goto LAB_0336acb0;
              uVar2 = 0x44d;
            }
            goto FUN_0336ac7c;
          }
          if (uVar1 < 0x5c2e17c4) {
            if (uVar1 == 0x5c22ded0) {
              uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7844,0);
              if ((uVar3 & 1) == 0) goto LAB_0336acb0;
              uVar2 = 0x40b;
            }
            else {
              if ((uVar1 != 0x5c2e17c3) ||
                 (uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7894,0),
                 (uVar3 & 1) == 0)) goto LAB_0336acb0;
              uVar2 = 0x481;
            }
          }
          else if (uVar1 == 0x5c3ae3b6) {
            uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7280,0);
            if ((uVar3 & 1) == 0) goto LAB_0336acb0;
            uVar2 = 0x40d;
          }
          else {
            if ((uVar1 != 0x5c7ad43c) ||
               (uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7805,0),
               (uVar3 & 1) == 0)) goto LAB_0336acb0;
            uVar2 = 0x48c;
          }
          goto FUN_0336ac7c;
        }
        if (uVar1 < 0x5f2e1c7d) {
          if (uVar1 < 0x5e4335a2) {
            if (uVar1 == 0x5e2e1ae9) {
              uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7852,0);
              if ((uVar3 & 1) == 0) goto LAB_0336acb0;
              uVar2 = 0x42f;
            }
            else {
              if ((uVar1 != 0x5e4335a1) ||
                 (uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7854,0),
                 (uVar3 & 1) == 0)) goto LAB_0336acb0;
              uVar2 = 0x422;
            }
          }
          else if (uVar1 == 0x5e4e6e94) {
            uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7821,0);
            if ((uVar3 & 1) == 0) goto LAB_0336acb0;
            uVar2 = 0x463;
          }
          else {
            if ((uVar1 != 0x5f2e1c7c) ||
               (uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7887,0),
               (uVar3 & 1) == 0)) goto LAB_0336acb0;
            uVar2 = 0x44c;
          }
          goto FUN_0336ac7c;
        }
        if (uVar1 < 0x605481e9) {
          puVar5 = (undefined8 *)StringLiteral_7778;
          if (uVar1 != 0x603aea02) {
            if ((uVar1 != 0x605481e8) ||
               (uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_5964,0),
               (uVar3 & 1) == 0)) goto LAB_0336acb0;
            uVar2 = 0x417;
            goto FUN_0336ac7c;
          }
LAB_0336a5e0:
          uVar3 = thunk_FUN_03278f50(uVar2,*puVar5,0);
          if ((uVar3 & 1) == 0) goto LAB_0336acb0;
          uVar2 = 0x468;
          goto FUN_0336ac7c;
        }
        puVar5 = (undefined8 *)StringLiteral_7895;
        if (uVar1 != 0x612e1fa2) {
          if (uVar1 == 0x61366e67) {
            uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7825,0);
            if ((uVar3 & 1) == 0) goto LAB_0336acb0;
            uVar2 = 0x413;
          }
          else {
            if ((uVar1 != 0x6222e842) ||
               (uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7823,0),
               (uVar3 & 1) == 0)) goto LAB_0336acb0;
            uVar2 = 0x438;
          }
          goto FUN_0336ac7c;
        }
        goto LAB_0336abb0;
      }
      if (0x572e0fe4 < uVar1) {
        if (0x5836603c < uVar1) {
          if (uVar1 < 0x5867fd09) {
            if (uVar1 == 0x583add6a) {
              uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7847,0);
              if ((uVar3 & 1) == 0) goto LAB_0336acb0;
              uVar2 = 0x42b;
            }
            else {
              if ((uVar1 != 0x5867fd08) ||
                 (uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7796,0),
                 (uVar3 & 1) == 0)) goto LAB_0336acb0;
              uVar2 = 0x435;
            }
          }
          else if (uVar1 == 0x5a432f55) {
            uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7780,0);
            if ((uVar3 & 1) == 0) goto LAB_0336acb0;
            uVar2 = 0x480;
          }
          else if (uVar1 == 0x5b31e7c7) {
            uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7903,0);
            if ((uVar3 & 1) == 0) goto LAB_0336acb0;
            uVar2 = 0x426;
          }
          else {
            if ((uVar1 != 0x5c1ccea2) ||
               (uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7882,0),
               (uVar3 & 1) == 0)) goto LAB_0336acb0;
            uVar2 = 0x407;
          }
          goto FUN_0336ac7c;
        }
        if (0x581cc856 < uVar1) {
          if (uVar1 == 0x58299449) {
            uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7867,0);
            if ((uVar3 & 1) == 0) goto LAB_0336acb0;
            uVar2 = 0x403;
          }
          else {
            if ((uVar1 != 0x5836603c) ||
               (uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7874,0),
               (uVar3 & 1) == 0)) goto LAB_0336acb0;
            uVar2 = 0x461;
          }
          goto FUN_0336ac7c;
        }
        puVar5 = (undefined8 *)StringLiteral_7795;
        if (uVar1 != 0x57365ea9) {
          if ((uVar1 != 0x581cc856) ||
             (uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7835,0),
             (uVar3 & 1) == 0)) goto LAB_0336acb0;
          uVar2 = 0x406;
          goto FUN_0336ac7c;
        }
LAB_0336a340:
        uVar3 = thunk_FUN_03278f50(uVar2,*puVar5,0);
        if ((uVar3 & 1) == 0) goto LAB_0336acb0;
        uVar2 = 0x414;
        goto FUN_0336ac7c;
      }
      if (0x55251262 < uVar1) {
        if (uVar1 < 0x5539c889) {
          if (uVar1 == 0x552e0cbe) {
            uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7899,0);
            if ((uVar3 & 1) == 0) goto LAB_0336acb0;
            uVar2 = 0x44e;
          }
          else {
            if ((uVar1 != 0x5539c888) ||
               (uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7800,0),
               (uVar3 & 1) == 0)) goto LAB_0336acb0;
            uVar2 = 0x484;
          }
        }
        else if (uVar1 == 0x562e0e51) {
          uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_677,0);
          if ((uVar3 & 1) == 0) goto LAB_0336acb0;
          uVar2 = 0x43e;
        }
        else if (uVar1 == 0x5722d6f1) {
          uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7792,0);
          if ((uVar3 & 1) == 0) goto LAB_0336acb0;
          uVar2 = 0x40c;
        }
        else {
          if ((uVar1 != 0x572e0fe4) ||
             (uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7817,0),
             (uVar3 & 1) == 0)) goto LAB_0336acb0;
          uVar2 = 0x43a;
        }
        goto FUN_0336ac7c;
      }
      if (uVar1 < 0x504e588b) {
        if (uVar1 == 0x503d0f69) {
          uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7004,0);
          if ((uVar3 & 1) == 0) goto LAB_0336acb0;
          uVar2 = 0x440;
        }
        else {
          if ((uVar1 != 0x504e588a) ||
             (uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7830,0),
             (uVar3 & 1) == 0)) goto LAB_0336acb0;
          uVar2 = 0x446;
        }
        goto FUN_0336ac7c;
      }
      puVar5 = (undefined8 *)StringLiteral_7811;
      if (uVar1 == 0x54ecc315) goto LAB_0336a658;
      puVar5 = (undefined8 *)StringLiteral_7252;
      if (uVar1 != 0x55251262) goto LAB_0336acb0;
    }
    else {
      if (uVar1 < 0xb38f1d87) {
        if (uVar1 < 0x683af69b) {
          if (0x6254850e < uVar1) {
            if (uVar1 < 0x6336718e) {
              if (uVar1 == 0x625fbe01) {
                uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7784,0);
                if ((uVar3 & 1) == 0) goto LAB_0336acb0;
                uVar2 = 0x46a;
              }
              else {
                if ((uVar1 != 0x6336718d) ||
                   (uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7890,0),
                   (uVar3 & 1) == 0)) goto LAB_0336acb0;
                uVar2 = 0x814;
              }
              goto FUN_0336ac7c;
            }
            if (uVar1 == 0x6422eb68) {
              uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7878,0);
              if ((uVar3 & 1) == 0) goto LAB_0336acb0;
              uVar2 = 0x429;
              goto FUN_0336ac7c;
            }
            puVar5 = (undefined8 *)StringLiteral_7820;
            if (uVar1 != 0x6429ff0b) {
              if ((uVar1 != 0x683af69a) ||
                 (uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7901,0),
                 (uVar3 & 1) == 0)) goto LAB_0336acb0;
              uVar2 = 0x439;
              goto FUN_0336ac7c;
            }
            goto LAB_0336aaf0;
          }
          if (0x62366ffa < uVar1) {
            if (uVar1 == 0x6247b91b) {
              uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7812,0);
              if ((uVar3 & 1) == 0) goto LAB_0336acb0;
              uVar2 = 0x488;
            }
            else {
              if ((uVar1 != 0x6254850e) ||
                 (uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7782,0),
                 (uVar3 & 1) == 0)) goto LAB_0336acb0;
              uVar2 = 0x418;
            }
            goto FUN_0336ac7c;
          }
          if (uVar1 == 0x6229a407) {
            uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7886,0);
            if ((uVar3 & 1) != 0) {
              uVar2 = 0x483;
              goto FUN_0336ac7c;
            }
            goto LAB_0336acb0;
          }
          puVar5 = (undefined8 *)StringLiteral_7834;
          if (uVar1 != 0x62366ffa) goto LAB_0336acb0;
          goto LAB_0336a340;
        }
        if (uVar1 < 0x79fc4cdd) {
          if (0x6c3f7a14 < uVar1) {
            if (uVar1 == 0x6e344447) {
              uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7857,0);
              if ((uVar3 & 1) == 0) goto LAB_0336acb0;
              uVar2 = 0x482;
            }
            else {
              if ((uVar1 != 0x79fc4cdc) ||
                 (uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7861,0),
                 (uVar3 & 1) == 0)) goto LAB_0336acb0;
              uVar2 = 0x457;
            }
            goto FUN_0336ac7c;
          }
          puVar5 = (undefined8 *)StringLiteral_7898;
          if (uVar1 != 0x6ac023e8) {
            if ((uVar1 != 0x6c3f7a14) ||
               (uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_4374,0),
               (uVar3 & 1) == 0)) goto LAB_0336acb0;
            uVar2 = 0x411;
            goto FUN_0336ac7c;
          }
          goto LAB_0336a604;
        }
        if (uVar1 < 0x8301deec) {
          puVar5 = (undefined8 *)StringLiteral_7871;
          if (((uVar1 == 0x81f731c3) ||
              (puVar5 = (undefined8 *)StringLiteral_7888, uVar1 == 0x8301deeb)) &&
             (uVar3 = thunk_FUN_03278f50(uVar2,*puVar5,0), (uVar3 & 1) != 0)) {
            uVar2 = 0xc04;
            goto FUN_0336ac7c;
          }
          goto LAB_0336acb0;
        }
        puVar5 = (undefined8 *)StringLiteral_7810;
        if ((uVar1 != 0x86f739a2) &&
           (puVar5 = (undefined8 *)StringLiteral_7889, uVar1 != 0x8801e6ca)) {
          puVar5 = (undefined8 *)StringLiteral_7859;
          if (uVar1 != 0xb38f1d86) goto LAB_0336acb0;
          goto LAB_0336a0a0;
        }
        goto FUN_0336ab44;
      }
      if (uVar1 < 0xe23c4d72) {
        if (0xc458a0a9 < uVar1) {
          if (uVar1 < 0xda1c9924) {
            if (uVar1 == 0xc6e4a1f4) {
              uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7876,0);
              if ((uVar3 & 1) == 0) goto LAB_0336acb0;
              uVar2 = 0x464;
            }
            else {
              if ((uVar1 != 0xda1c9923) ||
                 (uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7824,0),
                 (uVar3 & 1) == 0)) goto LAB_0336acb0;
              uVar2 = 0x485;
            }
          }
          else if (uVar1 == 0xdb3aafca) {
            uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7863,0);
            if ((uVar3 & 1) == 0) goto LAB_0336acb0;
            uVar2 = 0x203b;
          }
          else if (uVar1 == 0xe03ab7a9) {
            uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7787,0);
            if ((uVar3 & 1) == 0) goto LAB_0336acb0;
            uVar2 = 0x243b;
          }
          else {
            if ((uVar1 != 0xe23c4d71) ||
               (uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7866,0),
               (uVar3 & 1) == 0)) goto LAB_0336acb0;
            uVar2 = 0x281a;
          }
          goto FUN_0336ac7c;
        }
        if (0xc0315742 < uVar1) {
          if (uVar1 == 0xc1235e46) {
            uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7905,0);
            if ((uVar3 & 1) == 0) goto LAB_0336acb0;
            uVar2 = 0x82e;
          }
          else {
            if ((uVar1 != 0xc458a0a9) ||
               (uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7793,0),
               (uVar3 & 1) == 0)) goto LAB_0336acb0;
            uVar2 = 0x45a;
          }
          goto FUN_0336ac7c;
        }
        if (uVar1 == 0xbd35cf27) {
          uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7815,0);
          if ((uVar3 & 1) != 0) {
            uVar2 = 0x201a;
            goto FUN_0336ac7c;
          }
          goto LAB_0336acb0;
        }
        puVar5 = (undefined8 *)StringLiteral_7845;
        if (uVar1 != 0xc0315742) goto LAB_0336acb0;
        goto LAB_03369fa4;
      }
      if (uVar1 < 0xeb9e8568) {
        if (uVar1 < 0xe93ac5d5) {
          if (uVar1 == 0xe43abdf5) {
            uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7891,0);
            if ((uVar3 & 1) == 0) goto LAB_0336acb0;
            uVar2 = 0x143b;
          }
          else {
            if ((uVar1 != 0xe93ac5d4) ||
               (uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7832,0),
               (uVar3 & 1) == 0)) goto LAB_0336acb0;
            uVar2 = 0x1c3b;
          }
        }
        else if (uVar1 == 0xe98e391b) {
          uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7896,0);
          if ((uVar3 & 1) == 0) goto LAB_0336acb0;
          uVar2 = 0x843;
        }
        else {
          if ((uVar1 != 0xeb9e8567) ||
             (uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7816,0),
             (uVar3 & 1) == 0)) goto LAB_0336acb0;
          uVar2 = 0x47c;
        }
        goto FUN_0336ac7c;
      }
      if (0xf0e14d63 < uVar1) {
        if (uVar1 == 0xf491fb4a) {
          uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7868,0);
          if ((uVar3 & 1) != 0) {
            uVar2 = 0x42e;
            goto FUN_0336ac7c;
          }
          goto LAB_0336acb0;
        }
        if (uVar1 == 0xfee1636d) {
          uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7902,0);
          if ((uVar3 & 1) != 0) {
            uVar2 = 0x486;
            goto FUN_0336ac7c;
          }
          goto LAB_0336acb0;
        }
        puVar5 = (undefined8 *)StringLiteral_7869;
        if (uVar1 != 0xff1fc348) goto LAB_0336acb0;
        goto LAB_0336a5e0;
      }
      puVar5 = (undefined8 *)StringLiteral_7818;
      if (uVar1 != 0xee5e60a8) {
        if ((uVar1 != 0xf0e14d63) ||
           (uVar3 = thunk_FUN_03278f50(uVar2,*(undefined8 *)StringLiteral_7906,0), (uVar3 & 1) == 0)
           ) goto LAB_0336acb0;
        uVar2 = 0x46b;
        goto FUN_0336ac7c;
      }
    }
    uVar3 = thunk_FUN_03278f50(uVar2,*puVar5,0);
    if ((uVar3 & 1) == 0) goto LAB_0336acb0;
    uVar2 = 0x42c;
  }
FUN_0336ac7c:
  uVar4 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_1369);
  FUN_03367848(uVar4,uVar2,1,0);
  return uVar4;
}


