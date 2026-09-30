/*
FUNCTION_NAME: ExitGames.Client.Photon.Protocol16$$SerializeByteArray
ENTRY_POINT: 060ea834
PROGRAM: vandalizer-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


undefined1  [16] ExitGames_Client_Photon_Protocol16__SerializeByteArray(void)

{
  undefined4 uVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined4 unaff_w19;
  uint unaff_w20;
  undefined4 unaff_w21;
  int unaff_w22;
  long unaff_x23;
  uint unaff_w24;
  long *unaff_x25;
  undefined8 *unaff_x26;
  long *unaff_x27;
  undefined1 auVar7 [16];
  float unaff_s8;
  float fVar8;
  ulong unaff_d9;
  undefined8 in_register_00005128;
  float fVar9;
  float fVar10;
  float fVar11;
  
  while( true ) {
    fVar9 = unaff_s8;
    if ((unaff_w24 >> 3 & 1) != 0) {
      fVar11 = *(float *)(unaff_x23 + 0xe4);
      fVar9 = *(float *)(unaff_x23 + 0xe8);
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      fVar10 = (float)unaff_d9;
      bVar2 = fVar11 * fVar11 + fVar9 * fVar9 <= unaff_s8 * unaff_s8 + fVar10 * fVar10;
      if (bVar2) {
        fVar11 = fVar10;
      }
      in_register_00005128 = 0;
      unaff_d9 = (ulong)(uint)fVar11;
      if (bVar2) {
        fVar9 = unaff_s8;
      }
    }
    do {
      unaff_w22 = unaff_w22 + 1;
      lVar4 = *unaff_x25;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        lVar4 = *unaff_x25;
      }
      lVar6 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
      if (lVar6 == 0) goto LAB_060ea9c8;
      if (*(int *)(lVar6 + 0x18) <= unaff_w22) {
        auVar7._8_8_ = in_register_00005128;
        auVar7._0_8_ = unaff_d9;
        return auVar7;
      }
      if (*(int *)(lVar4 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        lVar6 = *(long *)(*(long *)(*unaff_x25 + 0xb8) + 8);
        if (lVar6 == 0) goto LAB_060ea9c8;
      }
      unaff_x23 = FUN_047af170(lVar6,unaff_w22,*unaff_x26);
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
      uVar5 = FUN_060e8cb8(uVar1,unaff_w19);
    } while ((uVar5 & 1) == 0);
    if (*(long *)(unaff_x23 + 0x38) == 0) break;
    uVar3 = FUN_060ecdb8(*(long *)(unaff_x23 + 0x38),unaff_w21);
    unaff_w24 = uVar3 | unaff_w20;
    fVar11 = fVar9;
    if ((unaff_w24 & 1) != 0) {
      fVar10 = *(float *)(unaff_x23 + 0xcc);
      fVar11 = *(float *)(unaff_x23 + 0xd0);
      if (*(char *)(unaff_x23 + 0x118) != '\0') {
        lVar4 = *unaff_x25;
        if (*(int *)(lVar4 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
          lVar4 = *unaff_x25;
        }
        fVar10 = (float)FUN_060eaa4c(fVar10,fVar11,*(undefined4 *)(*(long *)(lVar4 + 0xb8) + 4));
      }
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      fVar8 = (float)unaff_d9;
      bVar2 = fVar11 * fVar11 + fVar10 * fVar10 <= fVar9 * fVar9 + fVar8 * fVar8;
      if (bVar2) {
        fVar10 = fVar8;
      }
      in_register_00005128 = 0;
      unaff_d9 = (ulong)(uint)fVar10;
      if (bVar2) {
        fVar11 = fVar9;
      }
    }
    fVar9 = fVar11;
    if ((unaff_w24 >> 2 & 1) != 0) {
      fVar10 = *(float *)(unaff_x23 + 0xdc);
      fVar9 = *(float *)(unaff_x23 + 0xe0);
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      fVar8 = (float)unaff_d9;
      bVar2 = fVar10 * fVar10 + fVar9 * fVar9 <= fVar11 * fVar11 + fVar8 * fVar8;
      if (bVar2) {
        fVar10 = fVar8;
      }
      in_register_00005128 = 0;
      unaff_d9 = (ulong)(uint)fVar10;
      if (bVar2) {
        fVar9 = fVar11;
      }
    }
    unaff_s8 = fVar9;
    if ((unaff_w24 >> 1 & 1) != 0) {
      fVar11 = *(float *)(unaff_x23 + 0xd4);
      unaff_s8 = *(float *)(unaff_x23 + 0xd8);
      if (*(char *)(unaff_x23 + 0x118) != '\0') {
        lVar4 = *unaff_x25;
        if (*(int *)(lVar4 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
          lVar4 = *unaff_x25;
        }
        fVar11 = (float)FUN_060eaa4c(fVar11,unaff_s8,*(undefined4 *)(*(long *)(lVar4 + 0xb8) + 4));
      }
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      fVar10 = (float)unaff_d9;
      bVar2 = unaff_s8 * unaff_s8 + fVar11 * fVar11 <= fVar9 * fVar9 + fVar10 * fVar10;
      if (bVar2) {
        fVar11 = fVar10;
      }
      in_register_00005128 = 0;
      unaff_d9 = (ulong)(uint)fVar11;
      if (bVar2) {
        unaff_s8 = fVar9;
      }
    }
  }
LAB_060ea9c8:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


