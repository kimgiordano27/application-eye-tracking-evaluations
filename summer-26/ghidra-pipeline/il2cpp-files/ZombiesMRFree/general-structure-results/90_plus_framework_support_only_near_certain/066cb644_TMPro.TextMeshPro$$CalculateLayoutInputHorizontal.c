/*
FUNCTION_NAME: TMPro.TextMeshPro$$CalculateLayoutInputHorizontal
ENTRY_POINT: 066cb644
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 124
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_20;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_10;telemetry_or_network_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_8
*/


void TMPro_TextMeshPro__CalculateLayoutInputHorizontal(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long unaff_x19;
  undefined8 *unaff_x20;
  int unaff_w21;
  long *unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  int unaff_w25;
  int unaff_w26;
  undefined8 *puVar9;
  long lVar10;
  long *unaff_x29;
  double dVar11;
  undefined8 uVar12;
  double dVar13;
  double unaff_d8;
  double dVar14;
  double dVar15;
  double unaff_d12;
  double unaff_d13;
  double unaff_d14;
  double unaff_d15;
  long *in_stack_00000010;
  long *in_stack_00000018;
  undefined8 in_stack_00000030;
  double in_stack_00000038;
  double in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  double in_stack_00000068;
  double in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  double in_stack_00000098;
  double in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  double in_stack_000000c8;
  double in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  double in_stack_000000f8;
  double in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  int iStack0000000000000128;
  int iStack000000000000012c;
  undefined8 in_stack_00000130;
  double in_stack_00000138;
  double in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  double in_stack_00000168;
  double in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  
  while( true ) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    FUN_0437ee50(param_1,unaff_w26,
                 *(undefined8 *)
                  System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_TypeInfo);
    if (0 < unaff_w25) {
      iVar4 = 1;
      do {
        if (*(long *)(unaff_x19 + 0x18) == 0) goto LAB_066cbe70;
        lVar10 = *(long *)(unaff_x19 + 0x28);
        FUN_043e994c(&stack0x00000130,*(long *)(unaff_x19 + 0x18),iVar4 + -1,*unaff_x20);
        in_stack_00000168 = in_stack_00000138;
        in_stack_00000160 = in_stack_00000130;
        in_stack_00000178 = in_stack_00000148;
        in_stack_00000170 = in_stack_00000140;
        in_stack_00000188 = in_stack_00000158;
        in_stack_00000180 = in_stack_00000150;
        if (*unaff_x22 == 0) goto LAB_066cbe70;
        FUN_043e994c(&stack0x00000130,*unaff_x22,iVar4,*unaff_x20);
        in_stack_00000098 = in_stack_00000138;
        in_stack_00000090 = in_stack_00000130;
        in_stack_000000a8 = in_stack_00000148;
        in_stack_000000a0 = in_stack_00000140;
        in_stack_000000b8 = in_stack_00000158;
        in_stack_000000b0 = in_stack_00000150;
        in_stack_000000c8 = in_stack_00000168;
        in_stack_000000c0 = in_stack_00000160;
        in_stack_000000d8 = in_stack_00000178;
        in_stack_000000d0 = in_stack_00000170;
        in_stack_000000e8 = in_stack_00000188;
        in_stack_000000e0 = in_stack_00000180;
        dVar15 = in_stack_00000140;
        uVar12 = FUN_066cafcc(&stack0x000000c0,&stack0x00000090);
        if (lVar10 == 0) goto LAB_066cbe70;
        lVar5 = *(long *)(lVar10 + 0x10);
        lVar7 = *(long *)
                 System_Collections_Generic_List<OVRPassthroughLayer_DeferredPassthroughMeshAddition>_TypeInfo
        ;
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
        if (lVar5 == 0) goto LAB_066cbe70;
        uVar1 = *(uint *)(lVar10 + 0x18);
        if (uVar1 < *(uint *)(lVar5 + 0x18)) {
          lVar5 = lVar5 + (long)(int)uVar1 * 0x10;
          *(uint *)(lVar10 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar5 + 0x20) = uVar12;
          *(double *)(lVar5 + 0x28) = dVar15;
        }
        else {
          FUN_0437f300(lVar10,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
        }
        iVar4 = iVar4 + 1;
      } while (unaff_w26 != iVar4);
    }
    lVar10 = *(long *)(unaff_x19 + 0x28);
    if (*(uint *)(unaff_x24 + 0x28) < 2) {
      if (*unaff_x22 == 0) goto LAB_066cbe70;
      FUN_043e994c(&stack0x00000130,*unaff_x22,unaff_w25,*unaff_x20);
      in_stack_00000168 = in_stack_00000138;
      in_stack_00000160 = in_stack_00000130;
      in_stack_00000178 = in_stack_00000148;
      in_stack_00000170 = in_stack_00000140;
      in_stack_00000188 = in_stack_00000158;
      in_stack_00000180 = in_stack_00000150;
      if (*unaff_x22 == 0) goto LAB_066cbe70;
      FUN_043e994c(&stack0x00000130,*unaff_x22,0,*unaff_x20);
      in_stack_00000038 = in_stack_00000138;
      in_stack_00000030 = in_stack_00000130;
      in_stack_00000048 = in_stack_00000148;
      in_stack_00000040 = in_stack_00000140;
      in_stack_00000058 = in_stack_00000158;
      in_stack_00000050 = in_stack_00000150;
      in_stack_00000068 = in_stack_00000168;
      in_stack_00000060 = in_stack_00000160;
      in_stack_00000078 = in_stack_00000178;
      in_stack_00000070 = in_stack_00000170;
      in_stack_00000088 = in_stack_00000188;
      in_stack_00000080 = in_stack_00000180;
      dVar15 = in_stack_00000140;
      uVar12 = FUN_066cafcc(&stack0x00000060,&stack0x00000030);
      if (lVar10 == 0) goto LAB_066cbe70;
    }
    else {
      if (lVar10 == 0) goto LAB_066cbe70;
      FUN_0437effc(lVar10,unaff_w26 + -2,
                   *(undefined8 *)
                    System_Collections_Generic_List<OVRPermissionsRequester_Permission>_TypeInfo);
      in_stack_00000160 = 0;
      in_stack_00000168 = 0.0;
      FUN_066bd8a0(&stack0x00000160,0);
      uVar12 = in_stack_00000160;
      dVar15 = in_stack_00000168;
    }
    lVar5 = *(long *)(lVar10 + 0x10);
    lVar7 = *(long *)
             System_Collections_Generic_List<OVRPassthroughLayer_DeferredPassthroughMeshAddition>_TypeInfo
    ;
    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
    if (lVar5 == 0) goto LAB_066cbe70;
    uVar1 = *(uint *)(lVar10 + 0x18);
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      lVar5 = lVar5 + (long)(int)uVar1 * 0x10;
      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar5 + 0x20) = uVar12;
      *(double *)(lVar5 + 0x28) = dVar15;
    }
    else {
      FUN_0437f300(lVar10,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
    }
    puVar9 = (undefined8 *)System_Collections_Generic_List<XRInputSubsystemDescriptor>_TypeInfo;
    if (*(int *)(unaff_x24 + 0x28) == 1) break;
    if (*(int *)(unaff_x24 + 0x28) == 0) {
      iStack000000000000012c = unaff_w25;
      if (unaff_w26 < 1) goto LAB_066cba14;
      iVar4 = 0;
      do {
        FUN_066cbea4();
        iVar4 = iVar4 + 1;
        if (unaff_w26 == iVar4) goto LAB_066cba14;
      } while( true );
    }
    in_stack_00000120._4_4_ = 0;
    if (1 < unaff_w25) {
      iVar4 = 2;
      do {
        FUN_066cbea4();
        iVar4 = iVar4 + 1;
      } while (unaff_w26 != iVar4);
    }
    lVar10 = *(long *)(unaff_x19 + 0x28);
    *(undefined8 *)(unaff_x19 + 0x38) = 0;
    puVar3 = System_Collections_Generic_List<OVRPermissionsRequester_Permission>_TypeInfo;
    if (lVar10 == 0) goto LAB_066cbe70;
    dVar14 = (double)FUN_0437effc(lVar10,unaff_w25,
                                  *(undefined8 *)
                                   System_Collections_Generic_List<OVRPermissionsRequester_Permission>_TypeInfo
                                 );
    if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_066cbe70;
    FUN_0437effc(*(long *)(unaff_x19 + 0x28),unaff_w25,*(undefined8 *)puVar3);
    in_stack_00000160 = 0;
    in_stack_00000168 = 0.0;
    FUN_066bd898(-dVar14,-dVar15,&stack0x00000160,0);
    dVar15 = in_stack_00000168;
    FUN_0437f054(in_stack_00000160,in_stack_00000168,lVar10,unaff_w25,
                 *(undefined8 *)System_Collections_Generic_List<OVRRaycaster_RaycastHit>_TypeInfo);
    TMPro_TextMeshPro__DisableMasking();
    lVar10 = *(long *)(unaff_x19 + 0x28);
    iVar4 = unaff_w25;
    puVar9 = (undefined8 *)
             System_Collections_Generic_List<OVRPermissionsRequester_Permission>_TypeInfo;
    while( true ) {
      System_Collections_Generic_List<OVRPermissionsRequester_Permission>_TypeInfo =
           (undefined *)puVar9;
      if (lVar10 == 0) goto LAB_066cbe70;
      if (iVar4 < 1) break;
      iVar2 = iVar4 + -1;
      dVar14 = (double)FUN_0437effc(lVar10,iVar2,*puVar9);
      if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_066cbe70;
      FUN_0437effc(*(long *)(unaff_x19 + 0x28),iVar2,*puVar9);
      in_stack_00000160 = 0;
      in_stack_00000168 = 0.0;
      FUN_066bd898(-dVar14,-dVar15,&stack0x00000160,0);
      dVar15 = in_stack_00000168;
      FUN_0437f054(in_stack_00000160,lVar10,iVar4,
                   *(undefined8 *)System_Collections_Generic_List<OVRRaycaster_RaycastHit>_TypeInfo)
      ;
      lVar10 = *(long *)(unaff_x19 + 0x28);
      iVar4 = iVar2;
      puVar9 = (undefined8 *)
               System_Collections_Generic_List<OVRPermissionsRequester_Permission>_TypeInfo;
    }
    dVar14 = (double)FUN_0437effc(lVar10,1,*puVar9);
    if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_066cbe70;
    FUN_0437effc(*(long *)(unaff_x19 + 0x28),1,*puVar9);
    in_stack_00000160 = 0;
    in_stack_00000168 = 0.0;
    FUN_066bd898(-dVar14,-dVar15,&stack0x00000160,0);
    FUN_0437f054(in_stack_00000160,in_stack_00000168,lVar10,0,
                 *(undefined8 *)System_Collections_Generic_List<OVRRaycaster_RaycastHit>_TypeInfo);
    in_stack_00000120._4_4_ = unaff_w25;
    if (0 < unaff_w26 + -2) {
      do {
        unaff_w25 = unaff_w25 + -1;
        FUN_066cbea4();
      } while (1 < unaff_w25);
    }
    in_stack_00000120._4_4_ = 1;
    *(undefined8 *)(unaff_x19 + 0x38) = 0;
    TMPro_TextMeshPro__DisableMasking();
    lVar10 = *(long *)(unaff_x19 + 0x10);
    if (lVar10 == 0) goto LAB_066cbe70;
    lVar5 = *(long *)(unaff_x19 + 0x20);
    unaff_x23 = in_stack_00000018;
    puVar9 = (undefined8 *)System_Collections_Generic_List<XRInputSubsystemDescriptor>_TypeInfo;
    while( true ) {
      lVar7 = *(long *)(lVar10 + 0x10);
      lVar8 = *(long *)System_Collections_Generic_List<EasyTouchTrigger_EasyTouchReceiver>_TypeInfo;
      *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
      if (lVar7 == 0) goto LAB_066cbe70;
      uVar1 = *(uint *)(lVar10 + 0x18);
      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(lVar10 + 0x18) = uVar1 + 1;
        plVar6 = (long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
        *plVar6 = lVar5;
        thunk_FUN_03048534(plVar6);
      }
      else {
        FUN_044302e8(lVar10,lVar5,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70))
        ;
      }
      do {
        unaff_w21 = unaff_w21 + 1;
        if (*(long *)(unaff_x19 + 0x88) == 0) goto LAB_066cbe70;
        iVar4 = FUN_066bdc4c(*(long *)(unaff_x19 + 0x88),0);
        if (iVar4 <= unaff_w21) {
          return;
        }
        if (((*(long *)(unaff_x19 + 0x88) == 0) ||
            (lVar10 = *(long *)(*(long *)(unaff_x19 + 0x88) + 0x30), lVar10 == 0)) ||
           (unaff_x24 = FUN_04430018(lVar10,unaff_w21,*puVar9), unaff_x24 == 0)) goto LAB_066cbe70;
        *unaff_x22 = *(long *)(unaff_x24 + 0x18);
        thunk_FUN_03048534();
        if (*unaff_x22 == 0) goto LAB_066cbe70;
        unaff_w26 = *(int *)(*unaff_x22 + 0x18);
      } while ((unaff_w26 == 0) ||
              ((unaff_d8 <= 0.0 && ((unaff_w26 < 3 || (*(int *)(unaff_x24 + 0x28) != 0))))));
      lVar10 = thunk_FUN_0301080c(*(undefined8 *)System_Collections_Generic_List<XRView>_TypeInfo);
      FUN_043e93e8(lVar10,*(undefined8 *)System_Collections_Generic_List<XmlAttribute>_TypeInfo);
      *unaff_x23 = lVar10;
      thunk_FUN_03048534(unaff_x23,lVar10);
      unaff_w25 = unaff_w26 + -1;
      if (unaff_w25 != 0) break;
      if (*(int *)(unaff_x24 + 0x24) == 0) {
        if (unaff_d13 <= unaff_d12) {
          dVar15 = 0.0;
          dVar14 = 1.0;
          iVar4 = 2;
          do {
            if (*unaff_x22 == 0) goto LAB_066cbe70;
            lVar10 = *unaff_x23;
            FUN_043e994c(&stack0x00000160,*unaff_x22,0,*unaff_x20);
            if (*unaff_x22 == 0) goto LAB_066cbe70;
            dVar11 = dVar14 * unaff_d8 + (double)(long)in_stack_00000168;
            dVar13 = unaff_d15;
            if (0.0 <= dVar11) {
              dVar13 = unaff_d14;
            }
            dVar11 = dVar11 + dVar13;
            lVar5 = -0x8000000000000000;
            if (dVar11 != INFINITY) {
              lVar5 = (long)dVar11;
            }
            FUN_043e994c(&stack0x00000160,*unaff_x22,0,*unaff_x20);
            dVar11 = dVar15 * unaff_d8 + (double)(long)in_stack_00000170;
            dVar13 = unaff_d15;
            if (0.0 <= dVar11) {
              dVar13 = unaff_d14;
            }
            dVar11 = dVar11 + dVar13;
            lVar7 = -0x8000000000000000;
            if (dVar11 != INFINITY) {
              lVar7 = (long)dVar11;
            }
            in_stack_00000108 = 0;
            in_stack_00000100 = 0.0;
            in_stack_00000118 = 0;
            in_stack_00000110 = 0;
            in_stack_000000f8 = 0.0;
            in_stack_000000f0 = 0;
            FUN_066be1a4(&stack0x000000f0,lVar5,lVar7,0);
            if (lVar10 == 0) goto LAB_066cbe70;
            in_stack_00000138 = in_stack_000000f8;
            in_stack_00000130 = in_stack_000000f0;
            in_stack_00000148 = in_stack_00000108;
            in_stack_00000140 = in_stack_00000100;
            in_stack_00000158 = in_stack_00000118;
            in_stack_00000150 = in_stack_00000110;
            lVar5 = *(long *)(lVar10 + 0x10);
            lVar7 = *(long *)System_Collections_Generic_List<EventTrigger_Entry>_TypeInfo;
            *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
            if (lVar5 == 0) goto LAB_066cbe70;
            uVar1 = *(uint *)(lVar10 + 0x18);
            if (uVar1 < *(uint *)(lVar5 + 0x18)) {
              *(uint *)(lVar10 + 0x18) = uVar1 + 1;
              lVar5 = lVar5 + (long)(int)uVar1 * 0x30;
              *(undefined8 *)(lVar5 + 0x38) = in_stack_00000108;
              *(double *)(lVar5 + 0x30) = in_stack_00000100;
              *(undefined8 *)(lVar5 + 0x48) = in_stack_00000118;
              *(undefined8 *)(lVar5 + 0x40) = in_stack_00000110;
              *(double *)(lVar5 + 0x28) = in_stack_000000f8;
              *(undefined8 *)(lVar5 + 0x20) = in_stack_000000f0;
            }
            else {
              in_stack_00000168 = in_stack_000000f8;
              in_stack_00000160 = in_stack_000000f0;
              in_stack_00000178 = in_stack_00000108;
              in_stack_00000170 = in_stack_00000100;
              in_stack_00000188 = in_stack_00000118;
              in_stack_00000180 = in_stack_00000110;
              FUN_043e9ce8(lVar10,&stack0x00000160,
                           *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
            }
            dVar11 = (double)iVar4;
            iVar4 = iVar4 + 1;
            dVar13 = dVar14 * *(double *)(unaff_x19 + 0x40);
            dVar14 = dVar14 * *(double *)(unaff_x19 + 0x48) - dVar15 * *(double *)(unaff_x19 + 0x40)
            ;
            dVar15 = dVar15 * *(double *)(unaff_x19 + 0x48) + dVar13;
          } while (dVar11 <= unaff_d12);
        }
      }
      else {
        dVar14 = -1.0;
        iVar4 = 4;
        dVar15 = -1.0;
        do {
          if (*unaff_x22 == 0) goto LAB_066cbe70;
          lVar10 = *unaff_x23;
          FUN_043e994c(&stack0x00000160,*unaff_x22,0,*unaff_x20);
          if (*unaff_x22 == 0) goto LAB_066cbe70;
          dVar11 = dVar14 * unaff_d8 + (double)(long)in_stack_00000168;
          dVar13 = unaff_d15;
          if (0.0 <= dVar11) {
            dVar13 = unaff_d14;
          }
          dVar11 = dVar11 + dVar13;
          lVar5 = -0x8000000000000000;
          if (dVar11 != INFINITY) {
            lVar5 = (long)dVar11;
          }
          FUN_043e994c(&stack0x00000160,*unaff_x22,0,*unaff_x20);
          dVar11 = dVar15 * unaff_d8 + (double)(long)in_stack_00000170;
          dVar13 = unaff_d15;
          if (0.0 <= dVar11) {
            dVar13 = unaff_d14;
          }
          dVar11 = dVar11 + dVar13;
          lVar7 = -0x8000000000000000;
          if (dVar11 != INFINITY) {
            lVar7 = (long)dVar11;
          }
          in_stack_00000108 = 0;
          in_stack_00000100 = 0.0;
          in_stack_00000118 = 0;
          in_stack_00000110 = 0;
          in_stack_000000f8 = 0.0;
          in_stack_000000f0 = 0;
          FUN_066be1a4(&stack0x000000f0,lVar5,lVar7,0);
          if (lVar10 == 0) goto LAB_066cbe70;
          in_stack_00000138 = in_stack_000000f8;
          in_stack_00000130 = in_stack_000000f0;
          in_stack_00000148 = in_stack_00000108;
          in_stack_00000140 = in_stack_00000100;
          in_stack_00000158 = in_stack_00000118;
          in_stack_00000150 = in_stack_00000110;
          lVar5 = *(long *)(lVar10 + 0x10);
          lVar7 = *(long *)System_Collections_Generic_List<EventTrigger_Entry>_TypeInfo;
          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
          if (lVar5 == 0) goto LAB_066cbe70;
          uVar1 = *(uint *)(lVar10 + 0x18);
          if (uVar1 < *(uint *)(lVar5 + 0x18)) {
            *(uint *)(lVar10 + 0x18) = uVar1 + 1;
            lVar5 = lVar5 + (long)(int)uVar1 * 0x30;
            *(undefined8 *)(lVar5 + 0x38) = in_stack_00000108;
            *(double *)(lVar5 + 0x30) = in_stack_00000100;
            *(undefined8 *)(lVar5 + 0x48) = in_stack_00000118;
            *(undefined8 *)(lVar5 + 0x40) = in_stack_00000110;
            *(double *)(lVar5 + 0x28) = in_stack_000000f8;
            *(undefined8 *)(lVar5 + 0x20) = in_stack_000000f0;
          }
          else {
            in_stack_00000168 = in_stack_000000f8;
            in_stack_00000160 = in_stack_000000f0;
            in_stack_00000178 = in_stack_00000108;
            in_stack_00000170 = in_stack_00000100;
            in_stack_00000188 = in_stack_00000118;
            in_stack_00000180 = in_stack_00000110;
            FUN_043e9ce8(lVar10,&stack0x00000160,
                         *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
          }
          if (0.0 <= dVar14) {
            dVar13 = 1.0;
            if (0.0 <= dVar15) {
              dVar14 = -1.0;
              dVar13 = dVar15;
            }
          }
          else {
            dVar14 = 1.0;
            dVar13 = dVar15;
          }
          iVar4 = iVar4 + -1;
          dVar15 = dVar13;
        } while (iVar4 != 0);
      }
LAB_066cba14:
      lVar10 = *unaff_x29;
      if (lVar10 == 0) goto LAB_066cbe70;
LAB_066cba1c:
      lVar5 = *unaff_x23;
    }
    param_1 = *(long *)(unaff_x19 + 0x28);
    if (param_1 == 0) goto LAB_066cbe70;
  }
  iStack0000000000000128 = unaff_w25;
  if (0 < unaff_w26) {
    iVar4 = 0;
    do {
      FUN_066cbea4();
      iVar4 = iVar4 + 1;
    } while (unaff_w26 != iVar4);
  }
  lVar10 = *unaff_x29;
  if (lVar10 != 0) {
    lVar5 = *unaff_x23;
    lVar7 = *(long *)(lVar10 + 0x10);
    lVar8 = *(long *)System_Collections_Generic_List<EasyTouchTrigger_EasyTouchReceiver>_TypeInfo;
    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
    if (lVar7 != 0) {
      uVar1 = *(uint *)(lVar10 + 0x18);
      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(lVar10 + 0x18) = uVar1 + 1;
        plVar6 = (long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
        *plVar6 = lVar5;
        thunk_FUN_03048534(plVar6);
      }
      else {
        FUN_044302e8(lVar10,lVar5,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70))
        ;
      }
      uVar12 = thunk_FUN_0301080c(*(undefined8 *)System_Collections_Generic_List<XRView>_TypeInfo);
      FUN_043e93e8(uVar12,*(undefined8 *)System_Collections_Generic_List<XmlAttribute>_TypeInfo);
      *(undefined8 *)(unaff_x19 + 0x20) = uVar12;
      thunk_FUN_03048534(unaff_x23,uVar12);
      puVar3 = System_Collections_Generic_List<OVRPermissionsRequester_Permission>_TypeInfo;
      if (*(long *)(unaff_x19 + 0x28) != 0) {
        dVar13 = (double)FUN_0437effc(*(long *)(unaff_x19 + 0x28),unaff_w25,
                                      *(undefined8 *)
                                       System_Collections_Generic_List<OVRPermissionsRequester_Permission>_TypeInfo
                                     );
        lVar10 = *(long *)(unaff_x19 + 0x28);
        dVar14 = dVar15;
        iVar4 = unaff_w26;
        if (0 < unaff_w25) {
          do {
            if (lVar10 == 0) goto LAB_066cbe70;
            dVar11 = (double)FUN_0437effc(lVar10,iVar4 + -2,*(undefined8 *)puVar3);
            if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_066cbe70;
            iVar2 = iVar4 + -1;
            FUN_0437effc(*(long *)(unaff_x19 + 0x28),iVar4 + -2,*(undefined8 *)puVar3);
            in_stack_00000160 = 0;
            in_stack_00000168 = 0.0;
            FUN_066bd898(-dVar11,-dVar14,&stack0x00000160,0);
            dVar14 = in_stack_00000168;
            FUN_0437f054(in_stack_00000160,lVar10,iVar2,
                         *(undefined8 *)
                          System_Collections_Generic_List<OVRRaycaster_RaycastHit>_TypeInfo);
            lVar10 = *(long *)(unaff_x19 + 0x28);
            iVar4 = iVar2;
          } while (1 < iVar2);
        }
        in_stack_00000160 = 0;
        in_stack_00000168 = 0.0;
        FUN_066bd898(-dVar13,-dVar15,&stack0x00000160,0);
        if (lVar10 != 0) {
          FUN_0437f054(in_stack_00000160,in_stack_00000168,lVar10,0,
                       *(undefined8 *)
                        System_Collections_Generic_List<OVRRaycaster_RaycastHit>_TypeInfo);
          iStack0000000000000128 = 0;
          if (-1 < unaff_w25) {
            do {
              unaff_w26 = unaff_w26 + -1;
              FUN_066cbea4();
            } while (0 < unaff_w26);
          }
          lVar10 = *in_stack_00000010;
          unaff_x23 = in_stack_00000018;
          puVar9 = (undefined8 *)
                   System_Collections_Generic_List<XRInputSubsystemDescriptor>_TypeInfo;
          unaff_x29 = in_stack_00000010;
          if (lVar10 != 0) goto LAB_066cba1c;
        }
      }
    }
  }
LAB_066cbe70:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


