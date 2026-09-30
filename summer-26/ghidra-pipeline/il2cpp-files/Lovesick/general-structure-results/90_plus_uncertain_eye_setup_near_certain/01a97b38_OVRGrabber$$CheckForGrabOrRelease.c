/*
FUNCTION_NAME: OVRGrabber$$CheckForGrabOrRelease
ENTRY_POINT: 01a97b38
PROGRAM: Lovesick-libil2cpp.so
SCORE: 91
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x01a97d44) */
/* WARNING: Removing unreachable block (ram,0x01a97cd4) */
/* WARNING: Removing unreachable block (ram,0x01a97d04) */
/* WARNING: Removing unreachable block (ram,0x01a97d4c) */

void OVRGrabber__CheckForGrabOrRelease(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  int *piVar12;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  int in_stack_000000d8;
  long *in_stack_000000e0;
  undefined8 in_stack_000000f8;
  undefined4 in_stack_00000130;
  undefined4 uStack000000000000013c;
  
                    /* try { // try from 01a97b44 to 01b97b4b has its CatchHandler @ 01a97cac */
  FUN_00c075a0(&stack0x00000018,&stack0x00000100,**(undefined8 **)(param_1 + 0xdb8));
                    /* try { // try from 01a97b54 to 01b97b63 has its CatchHandler @ 01a97ca8 */
  in_stack_000000a8 = in_stack_00000020;
  in_stack_000000a0 = in_stack_00000018;
  in_stack_000000b0 = in_stack_00000028;
  FUN_01b7b498(&stack0x00000018,&stack0x000000a0,
               *(undefined8 *)
                Method_System_Collections_Generic_List<UIRenderDevice_AllocToUpdate>_Add__,
               (long)in_stack_000000d8,0,0);
  FUN_01342ff4(&stack0x000000d0,&stack0x00000018,*(undefined8 *)PTR_DAT_033f5bf8);
  puVar4 = Method_System_Security_Cryptography_RandomNumberGenerator_GetBytes__;
  puVar3 = FullSerializer_Internal_fsForwardConverter_TypeInfo;
  puVar2 = OVRPlugin_BoneCapsule___TypeInfo;
  puVar1 = PTR_DAT_033f2370;
  in_stack_00000078 = in_stack_00000020;
  in_stack_00000070 = in_stack_00000018;
  in_stack_00000088 = in_stack_00000030;
  in_stack_00000080 = in_stack_00000028;
  in_stack_00000098 = in_stack_00000040;
  in_stack_00000090 = in_stack_00000038;
  do {
    uVar9 = FUN_00c092c4(&stack0x00000070,*(undefined8 *)puVar2);
    if ((uVar9 & 1) == 0) {
      FUN_012b4c54(&stack0x00000070,*(undefined8 *)puVar4);
      in_stack_00000010 = 0;
      uStack000000000000013c = in_stack_00000130;
      FUN_01347274(&stack0x00000010,&stack0x0000013c,*unaff_x23);
      in_stack_000000f8 = in_stack_00000010;
      FUN_01342a94(&stack0x000000c0,*unaff_x22);
      FUN_00c095c4(&stack0x00000048);
      return;
    }
    FUN_00c09180(&stack0x00000018,&stack0x00000070,*(undefined8 *)puVar3);
    plVar8 = in_stack_000000e0;
    uVar7 = in_stack_00000028;
    uVar6 = in_stack_00000020;
    uVar5 = in_stack_00000018;
    if (in_stack_000000e0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar11 = *in_stack_000000e0;
    uVar9 = (ulong)*(ushort *)(lVar11 + 0x12a);
    if (uVar9 != 0) {
      piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
          puVar10 = (undefined8 *)(lVar11 + (long)(*piVar12 + 2) * 0x10 + 0x138);
          goto LAB_01a97c4c;
        }
        uVar9 = uVar9 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar9 != 0);
    }
    puVar10 = (undefined8 *)FUN_00d59724(in_stack_000000e0,*(long *)puVar1,2);
LAB_01a97c4c:
    in_stack_00000018 = uVar5;
    in_stack_00000020 = uVar6;
    in_stack_00000028 = uVar7;
    (*(code *)*puVar10)(plVar8,&stack0x00000018,puVar10[1]);
  } while( true );
}


