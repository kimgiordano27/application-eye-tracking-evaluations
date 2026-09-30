/*
FUNCTION_NAME: ExitGames.Client.Photon.Protocol16$$SerializeObjectArray
ENTRY_POINT: 060ea8a0
PROGRAM: vandalizer-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


/* WARNING: Type propagation algorithm not settling */

float ExitGames_Client_Photon_Protocol16__SerializeObjectArray(float param_1,float param_2)

{
  undefined4 uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined4 unaff_w19;
  uint unaff_w20;
  undefined4 unaff_w21;
  int unaff_w22;
  long unaff_x23;
  uint unaff_w24;
  long *unaff_x25;
  undefined8 *unaff_x26;
  long *unaff_x27;
  float unaff_s8;
  float unaff_s9;
  float fVar6;
  float fVar7;
  ulong unaff_d10;
  float unaff_s11;
  float fVar8;
  float fVar9;
  
  do {
    fVar7 = (float)unaff_d10;
    if (param_2 <= param_1) {
      fVar7 = unaff_s8;
      unaff_s11 = unaff_s9;
    }
    do {
      fVar6 = fVar7;
      fVar8 = unaff_s11;
      if ((unaff_w24 >> 2 & 1) != 0) {
        fVar8 = *(float *)(unaff_x23 + 0xdc);
        fVar6 = *(float *)(unaff_x23 + 0xe0);
        if (*(int *)(*unaff_x25 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        if (fVar8 * fVar8 + fVar6 * fVar6 <= fVar7 * fVar7 + unaff_s11 * unaff_s11) {
          fVar6 = fVar7;
          fVar8 = unaff_s11;
        }
      }
      fVar7 = fVar6;
      fVar9 = fVar8;
      if ((unaff_w24 >> 1 & 1) != 0) {
        fVar9 = *(float *)(unaff_x23 + 0xd4);
        fVar7 = *(float *)(unaff_x23 + 0xd8);
        if (*(char *)(unaff_x23 + 0x118) != '\0') {
          lVar4 = *unaff_x25;
          if (*(int *)(lVar4 + 0xe4) == 0) {
            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
            lVar4 = *unaff_x25;
          }
          fVar9 = (float)FUN_060eaa4c(fVar9,fVar7,*(undefined4 *)(*(long *)(lVar4 + 0xb8) + 4));
        }
        if (*(int *)(*unaff_x25 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        if (fVar7 * fVar7 + fVar9 * fVar9 <= fVar6 * fVar6 + fVar8 * fVar8) {
          fVar7 = fVar6;
          fVar9 = fVar8;
        }
      }
      unaff_s8 = fVar7;
      unaff_s9 = fVar9;
      if ((unaff_w24 >> 3 & 1) != 0) {
        unaff_s9 = *(float *)(unaff_x23 + 0xe4);
        unaff_s8 = *(float *)(unaff_x23 + 0xe8);
        if (*(int *)(*unaff_x25 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        if (unaff_s9 * unaff_s9 + unaff_s8 * unaff_s8 <= fVar7 * fVar7 + fVar9 * fVar9) {
          unaff_s8 = fVar7;
          unaff_s9 = fVar9;
        }
      }
      do {
        unaff_w22 = unaff_w22 + 1;
        lVar4 = *unaff_x25;
        if (*(int *)(lVar4 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
          lVar4 = *unaff_x25;
        }
        lVar5 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
        if (lVar5 == 0) goto LAB_060ea9c8;
        if (*(int *)(lVar5 + 0x18) <= unaff_w22) {
          return unaff_s9;
        }
        if (*(int *)(lVar4 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
          lVar5 = *(long *)(*(long *)(*unaff_x25 + 0xb8) + 8);
          if (lVar5 == 0) goto LAB_060ea9c8;
        }
        unaff_x23 = FUN_047af170(lVar5,unaff_w22,*unaff_x26);
        lVar4 = *unaff_x27;
        if (*(int *)(lVar4 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar4);
          lVar4 = *unaff_x27;
        }
        if (*(int *)(*(long *)(lVar4 + 0xb8) + 0x118) == 1) {
          if (unaff_x23 == 0) goto LAB_060ea9c8;
        }
        else {
          if (unaff_x23 == 0) goto LAB_060ea9c8;
          *(undefined1 *)(unaff_x23 + 0x118) = 0;
        }
        uVar1 = *(undefined4 *)(unaff_x23 + 0x10);
        if (*(int *)(*unaff_x25 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        uVar3 = FUN_060e8cb8(uVar1,unaff_w19);
      } while ((uVar3 & 1) == 0);
      if (*(long *)(unaff_x23 + 0x38) == 0) {
LAB_060ea9c8:
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
      uVar2 = FUN_060ecdb8(*(long *)(unaff_x23 + 0x38),unaff_w21);
      unaff_w24 = uVar2 | unaff_w20;
      fVar7 = unaff_s8;
      unaff_s11 = unaff_s9;
    } while ((unaff_w24 & 1) == 0);
    unaff_s11 = *(float *)(unaff_x23 + 0xcc);
    unaff_d10 = (ulong)*(uint *)(unaff_x23 + 0xd0);
    if (*(char *)(unaff_x23 + 0x118) != '\0') {
      lVar4 = *unaff_x25;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        lVar4 = *unaff_x25;
      }
      unaff_s11 = (float)FUN_060eaa4c(unaff_s11,unaff_d10,
                                      *(undefined4 *)(*(long *)(lVar4 + 0xb8) + 4));
    }
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    param_1 = unaff_s8 * unaff_s8 + unaff_s9 * unaff_s9;
    param_2 = (float)unaff_d10 * (float)unaff_d10 + unaff_s11 * unaff_s11;
  } while( true );
}


