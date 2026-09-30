/*
FUNCTION_NAME: OVRVignette$$BuildMaterials
ENTRY_POINT: 056fd6a8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 105
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x056fd7b8) */
/* WARNING: Removing unreachable block (ram,0x056fd8c0) */

void OVRVignette__BuildMaterials(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  char in_NG;
  char in_OV;
  undefined4 uVar3;
  undefined8 *puVar4;
  long lVar5;
  code *pcVar6;
  undefined8 uVar7;
  ulong uVar8;
  int *piVar9;
  int unaff_w19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 in_stack_00000018;
  long in_stack_00000048;
  undefined8 in_stack_00000050;
  long in_stack_00000058;
  char *in_stack_00000060;
  undefined8 *in_stack_00000068;
  char *in_stack_00000070;
  undefined8 *in_stack_00000078;
  long in_stack_00000080;
  int in_stack_00000088;
  int iStack0000000000000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  long *in_stack_000000f0;
  undefined8 in_stack_00000108;
  undefined4 in_stack_00000138;
  undefined8 in_stack_00000150;
  
  puVar1 = OVRPlugin_VirtualKeyboardModelAnimationState___TypeInfo;
  iStack0000000000000090 = unaff_w19;
  if (in_NG != in_OV) {
    do {
      lVar5 = in_stack_00000080;
      iStack0000000000000090 = unaff_w19;
      if ((*(ushort *)(*(long *)(param_1 + 0x20) + 0x135) & 1) == 0) {
        FUN_02dcfd18();
      }
      plVar2 = in_stack_000000f0;
      uVar7 = in_stack_000000a8;
      puVar4 = (undefined8 *)(lVar5 + (long)unaff_w19 * 0x18);
      uVar11 = puVar4[1];
      uVar10 = *puVar4;
      *(undefined8 *)(unaff_x23 + 0x28) = puVar4[2];
      *(undefined8 *)(unaff_x23 + 0x20) = uVar11;
      *(undefined8 *)(unaff_x23 + 0x18) = uVar10;
      if (in_stack_000000f0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar5 = *in_stack_000000f0;
      uVar11 = *(undefined8 *)(unaff_x21 + 0x20);
      uVar10 = *(undefined8 *)(unaff_x21 + 0x18);
      uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar9 + 2) * 0x10 + 0x138);
            goto LAB_056fd74c;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_02dd004c(in_stack_000000f0,*(long *)puVar1,2);
LAB_056fd74c:
      pcVar6 = (code *)*puVar4;
      in_stack_00000150 = uVar7;
      *(undefined8 *)(unaff_x21 + 200) = uVar11;
      *(undefined8 *)(unaff_x21 + 0xc0) = uVar10;
      (*pcVar6)(plVar2,&stack0x00000140,puVar4[1]);
      unaff_w19 = iStack0000000000000090 + 1;
      param_1 = *unaff_x20;
      iStack0000000000000090 = unaff_w19;
    } while (unaff_w19 < in_stack_00000088);
  }
  in_stack_00000098 = 0;
  in_stack_000000a0 = 0;
  in_stack_000000a8 = 0;
  FUN_05191da8(&stack0x00000080,
               *(undefined8 *)UnityEngine_UIElements_UIR_TextureBlitter_BlitInfo___TypeInfo);
  in_stack_00000018 = 0;
  FUN_043301b0(&stack0x00000018,in_stack_00000138,*unaff_x22);
  in_stack_00000108 = in_stack_00000018;
  FUN_0429fd68(in_stack_00000050,
               *(undefined8 *)Unity_Services_Lobbies_Models_TokenRequest_TokenTypeOptions___TypeInfo
              );
  if (in_stack_00000048 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96858();
  }
  if (*in_stack_00000060 != '\0') {
    uVar10 = *(undefined8 *)(in_stack_00000060 + 8);
    uVar7 = *(undefined8 *)(in_stack_00000060 + 0x18);
    in_stack_00000068[1] = *(undefined8 *)(in_stack_00000060 + 0x10);
    *in_stack_00000068 = uVar10;
    in_stack_00000068[2] = uVar7;
    FUN_057ccbb8(&stack0x00000018,in_stack_00000068,0);
  }
  puVar1 = System_Data_XSDSchema_NameType___TypeInfo;
  if (*in_stack_00000070 != '\0') {
    uVar7 = *in_stack_00000078;
    uVar3 = FUN_043301c8(in_stack_00000070,
                         *(undefined8 *)System_Net_WebHeaderCollection_RfcChar___TypeInfo);
    FUN_03769ac4(uVar7,uVar3,*(undefined8 *)puVar1);
  }
  if (in_stack_00000058 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96858();
}


