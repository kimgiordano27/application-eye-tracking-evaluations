/*
FUNCTION_NAME: TMPro.TextMeshPro$$OnDisable
ENTRY_POINT: 066cbb7c
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


void TMPro_TextMeshPro__OnDisable
               (undefined1 param_1 [16],double param_2,long param_3,ulong param_4,undefined8 param_5
               )

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long unaff_x19;
  undefined8 *unaff_x20;
  int unaff_w21;
  long *unaff_x22;
  uint unaff_w25;
  int unaff_w26;
  undefined8 *puVar10;
  long unaff_x27;
  long lVar11;
  long *unaff_x29;
  double dVar12;
  undefined8 uVar13;
  double dVar14;
  double dVar15;
  double unaff_d8;
  double dVar16;
  double unaff_d9;
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
  uint uStack0000000000000128;
  uint uStack000000000000012c;
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
    FUN_0437effc(param_3,param_4,param_5);
    in_stack_00000160 = 0;
    in_stack_00000168 = 0.0;
    FUN_066bd898(-unaff_d9,-param_2,&stack0x00000160,0);
    dVar16 = in_stack_00000168;
    FUN_0437f054(in_stack_00000160,in_stack_00000168,unaff_x27,unaff_w25,
                 *(undefined8 *)System_Collections_Generic_List<OVRRaycaster_RaycastHit>_TypeInfo);
    TMPro_TextMeshPro__DisableMasking();
    lVar11 = *(long *)(unaff_x19 + 0x28);
    uVar1 = unaff_w25;
    puVar10 = (undefined8 *)
              System_Collections_Generic_List<OVRPermissionsRequester_Permission>_TypeInfo;
    while( true ) {
      System_Collections_Generic_List<OVRPermissionsRequester_Permission>_TypeInfo =
           (undefined *)puVar10;
      if (lVar11 == 0) goto LAB_066cbe70;
      if ((int)uVar1 < 1) break;
      uVar2 = uVar1 - 1;
      dVar14 = (double)FUN_0437effc(lVar11,uVar2,*puVar10);
      if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_066cbe70;
      FUN_0437effc(*(long *)(unaff_x19 + 0x28),uVar2,*puVar10);
      in_stack_00000160 = 0;
      in_stack_00000168 = 0.0;
      FUN_066bd898(-dVar14,-dVar16,&stack0x00000160,0);
      dVar16 = in_stack_00000168;
      FUN_0437f054(in_stack_00000160,lVar11,uVar1,
                   *(undefined8 *)System_Collections_Generic_List<OVRRaycaster_RaycastHit>_TypeInfo)
      ;
      lVar11 = *(long *)(unaff_x19 + 0x28);
      uVar1 = uVar2;
      puVar10 = (undefined8 *)
                System_Collections_Generic_List<OVRPermissionsRequester_Permission>_TypeInfo;
    }
    dVar14 = (double)FUN_0437effc(lVar11,1,*puVar10);
    if (*(long *)(unaff_x19 + 0x28) == 0) break;
    FUN_0437effc(*(long *)(unaff_x19 + 0x28),1,*puVar10);
    in_stack_00000160 = 0;
    in_stack_00000168 = 0.0;
    FUN_066bd898(-dVar14,-dVar16,&stack0x00000160,0);
    FUN_0437f054(in_stack_00000160,in_stack_00000168,lVar11,0,
                 *(undefined8 *)System_Collections_Generic_List<OVRRaycaster_RaycastHit>_TypeInfo);
    in_stack_00000120._4_4_ = unaff_w25;
    if (0 < unaff_w26 + -2) {
      do {
        unaff_w25 = unaff_w25 - 1;
        FUN_066cbea4();
      } while (1 < (int)unaff_w25);
    }
    in_stack_00000120._4_4_ = 1;
    *(undefined8 *)(unaff_x19 + 0x38) = 0;
    TMPro_TextMeshPro__DisableMasking();
    lVar11 = *(long *)(unaff_x19 + 0x10);
    if (lVar11 == 0) break;
    lVar6 = *(long *)(unaff_x19 + 0x20);
    puVar10 = (undefined8 *)System_Collections_Generic_List<XRInputSubsystemDescriptor>_TypeInfo;
LAB_066cba20:
    lVar7 = *(long *)(lVar11 + 0x10);
    lVar9 = *(long *)System_Collections_Generic_List<EasyTouchTrigger_EasyTouchReceiver>_TypeInfo;
    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
    if (lVar7 == 0) break;
    uVar1 = *(uint *)(lVar11 + 0x18);
    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
      plVar8 = (long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
      *plVar8 = lVar6;
      thunk_FUN_03048534(plVar8);
    }
    else {
      FUN_044302e8(lVar11,lVar6,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
    }
    do {
      unaff_w21 = unaff_w21 + 1;
      if (*(long *)(unaff_x19 + 0x88) == 0) goto LAB_066cbe70;
      iVar5 = FUN_066bdc4c(*(long *)(unaff_x19 + 0x88),0);
      if (iVar5 <= unaff_w21) {
        return;
      }
      if (((*(long *)(unaff_x19 + 0x88) == 0) ||
          (lVar11 = *(long *)(*(long *)(unaff_x19 + 0x88) + 0x30), lVar11 == 0)) ||
         (lVar11 = FUN_04430018(lVar11,unaff_w21,*puVar10), lVar11 == 0)) goto LAB_066cbe70;
      *unaff_x22 = *(long *)(lVar11 + 0x18);
      thunk_FUN_03048534();
      if (*unaff_x22 == 0) goto LAB_066cbe70;
      unaff_w26 = *(int *)(*unaff_x22 + 0x18);
    } while ((unaff_w26 == 0) ||
            ((unaff_d8 <= 0.0 && ((unaff_w26 < 3 || (*(int *)(lVar11 + 0x28) != 0))))));
    lVar6 = thunk_FUN_0301080c(*(undefined8 *)System_Collections_Generic_List<XRView>_TypeInfo);
    FUN_043e93e8(lVar6,*(undefined8 *)System_Collections_Generic_List<XmlAttribute>_TypeInfo);
    *in_stack_00000018 = lVar6;
    thunk_FUN_03048534(in_stack_00000018,lVar6);
    unaff_w25 = unaff_w26 - 1;
    if (unaff_w25 == 0) {
      if (*(int *)(lVar11 + 0x24) == 0) {
        if (unaff_d13 <= unaff_d12) {
          dVar16 = 0.0;
          dVar14 = 1.0;
          iVar5 = 2;
          do {
            if (*unaff_x22 == 0) goto LAB_066cbe70;
            lVar11 = *in_stack_00000018;
            FUN_043e994c(&stack0x00000160,*unaff_x22,0,*unaff_x20);
            if (*unaff_x22 == 0) goto LAB_066cbe70;
            dVar12 = dVar14 * unaff_d8 + (double)(long)in_stack_00000168;
            dVar15 = unaff_d15;
            if (0.0 <= dVar12) {
              dVar15 = unaff_d14;
            }
            dVar12 = dVar12 + dVar15;
            lVar6 = -0x8000000000000000;
            if (dVar12 != INFINITY) {
              lVar6 = (long)dVar12;
            }
            FUN_043e994c(&stack0x00000160,*unaff_x22,0,*unaff_x20);
            dVar12 = dVar16 * unaff_d8 + (double)(long)in_stack_00000170;
            dVar15 = unaff_d15;
            if (0.0 <= dVar12) {
              dVar15 = unaff_d14;
            }
            dVar12 = dVar12 + dVar15;
            lVar7 = -0x8000000000000000;
            if (dVar12 != INFINITY) {
              lVar7 = (long)dVar12;
            }
            in_stack_00000108 = 0;
            in_stack_00000100 = 0.0;
            in_stack_00000118 = 0;
            in_stack_00000110 = 0;
            in_stack_000000f8 = 0.0;
            in_stack_000000f0 = 0;
            FUN_066be1a4(&stack0x000000f0,lVar6,lVar7,0);
            if (lVar11 == 0) goto LAB_066cbe70;
            in_stack_00000138 = in_stack_000000f8;
            in_stack_00000130 = in_stack_000000f0;
            in_stack_00000148 = in_stack_00000108;
            in_stack_00000140 = in_stack_00000100;
            in_stack_00000158 = in_stack_00000118;
            in_stack_00000150 = in_stack_00000110;
            lVar6 = *(long *)(lVar11 + 0x10);
            lVar7 = *(long *)System_Collections_Generic_List<EventTrigger_Entry>_TypeInfo;
            *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
            if (lVar6 == 0) goto LAB_066cbe70;
            uVar1 = *(uint *)(lVar11 + 0x18);
            if (uVar1 < *(uint *)(lVar6 + 0x18)) {
              *(uint *)(lVar11 + 0x18) = uVar1 + 1;
              lVar6 = lVar6 + (long)(int)uVar1 * 0x30;
              *(undefined8 *)(lVar6 + 0x38) = in_stack_00000108;
              *(double *)(lVar6 + 0x30) = in_stack_00000100;
              *(undefined8 *)(lVar6 + 0x48) = in_stack_00000118;
              *(undefined8 *)(lVar6 + 0x40) = in_stack_00000110;
              *(double *)(lVar6 + 0x28) = in_stack_000000f8;
              *(undefined8 *)(lVar6 + 0x20) = in_stack_000000f0;
            }
            else {
              in_stack_00000168 = in_stack_000000f8;
              in_stack_00000160 = in_stack_000000f0;
              in_stack_00000178 = in_stack_00000108;
              in_stack_00000170 = in_stack_00000100;
              in_stack_00000188 = in_stack_00000118;
              in_stack_00000180 = in_stack_00000110;
              FUN_043e9ce8(lVar11,&stack0x00000160,
                           *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
            }
            dVar12 = (double)iVar5;
            iVar5 = iVar5 + 1;
            dVar15 = dVar14 * *(double *)(unaff_x19 + 0x40);
            dVar14 = dVar14 * *(double *)(unaff_x19 + 0x48) - dVar16 * *(double *)(unaff_x19 + 0x40)
            ;
            dVar16 = dVar16 * *(double *)(unaff_x19 + 0x48) + dVar15;
          } while (dVar12 <= unaff_d12);
        }
      }
      else {
        dVar14 = -1.0;
        iVar5 = 4;
        dVar16 = -1.0;
        do {
          if (*unaff_x22 == 0) goto LAB_066cbe70;
          lVar11 = *in_stack_00000018;
          FUN_043e994c(&stack0x00000160,*unaff_x22,0,*unaff_x20);
          if (*unaff_x22 == 0) goto LAB_066cbe70;
          dVar12 = dVar14 * unaff_d8 + (double)(long)in_stack_00000168;
          dVar15 = unaff_d15;
          if (0.0 <= dVar12) {
            dVar15 = unaff_d14;
          }
          dVar12 = dVar12 + dVar15;
          lVar6 = -0x8000000000000000;
          if (dVar12 != INFINITY) {
            lVar6 = (long)dVar12;
          }
          FUN_043e994c(&stack0x00000160,*unaff_x22,0,*unaff_x20);
          dVar12 = dVar16 * unaff_d8 + (double)(long)in_stack_00000170;
          dVar15 = unaff_d15;
          if (0.0 <= dVar12) {
            dVar15 = unaff_d14;
          }
          dVar12 = dVar12 + dVar15;
          lVar7 = -0x8000000000000000;
          if (dVar12 != INFINITY) {
            lVar7 = (long)dVar12;
          }
          in_stack_00000108 = 0;
          in_stack_00000100 = 0.0;
          in_stack_00000118 = 0;
          in_stack_00000110 = 0;
          in_stack_000000f8 = 0.0;
          in_stack_000000f0 = 0;
          FUN_066be1a4(&stack0x000000f0,lVar6,lVar7,0);
          if (lVar11 == 0) goto LAB_066cbe70;
          in_stack_00000138 = in_stack_000000f8;
          in_stack_00000130 = in_stack_000000f0;
          in_stack_00000148 = in_stack_00000108;
          in_stack_00000140 = in_stack_00000100;
          in_stack_00000158 = in_stack_00000118;
          in_stack_00000150 = in_stack_00000110;
          lVar6 = *(long *)(lVar11 + 0x10);
          lVar7 = *(long *)System_Collections_Generic_List<EventTrigger_Entry>_TypeInfo;
          *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
          if (lVar6 == 0) goto LAB_066cbe70;
          uVar1 = *(uint *)(lVar11 + 0x18);
          if (uVar1 < *(uint *)(lVar6 + 0x18)) {
            *(uint *)(lVar11 + 0x18) = uVar1 + 1;
            lVar6 = lVar6 + (long)(int)uVar1 * 0x30;
            *(undefined8 *)(lVar6 + 0x38) = in_stack_00000108;
            *(double *)(lVar6 + 0x30) = in_stack_00000100;
            *(undefined8 *)(lVar6 + 0x48) = in_stack_00000118;
            *(undefined8 *)(lVar6 + 0x40) = in_stack_00000110;
            *(double *)(lVar6 + 0x28) = in_stack_000000f8;
            *(undefined8 *)(lVar6 + 0x20) = in_stack_000000f0;
          }
          else {
            in_stack_00000168 = in_stack_000000f8;
            in_stack_00000160 = in_stack_000000f0;
            in_stack_00000178 = in_stack_00000108;
            in_stack_00000170 = in_stack_00000100;
            in_stack_00000188 = in_stack_00000118;
            in_stack_00000180 = in_stack_00000110;
            FUN_043e9ce8(lVar11,&stack0x00000160,
                         *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
          }
          if (0.0 <= dVar14) {
            dVar15 = 1.0;
            if (0.0 <= dVar16) {
              dVar14 = -1.0;
              dVar15 = dVar16;
            }
          }
          else {
            dVar14 = 1.0;
            dVar15 = dVar16;
          }
          iVar5 = iVar5 + -1;
          dVar16 = dVar15;
        } while (iVar5 != 0);
      }
LAB_066cba14:
      lVar11 = *unaff_x29;
joined_r0x066cbe6c:
      if (lVar11 == 0) break;
      lVar6 = *in_stack_00000018;
      goto LAB_066cba20;
    }
    lVar6 = *(long *)(unaff_x19 + 0x28);
    if (lVar6 == 0) break;
    *(undefined4 *)(lVar6 + 0x18) = 0;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    FUN_0437ee50(lVar6,unaff_w26,
                 *(undefined8 *)
                  System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_TypeInfo);
    if (0 < (int)unaff_w25) {
      iVar5 = 1;
      do {
        if (*(long *)(unaff_x19 + 0x18) == 0) goto LAB_066cbe70;
        lVar6 = *(long *)(unaff_x19 + 0x28);
        FUN_043e994c(&stack0x00000130,*(long *)(unaff_x19 + 0x18),iVar5 + -1,*unaff_x20);
        in_stack_00000168 = in_stack_00000138;
        in_stack_00000160 = in_stack_00000130;
        in_stack_00000178 = in_stack_00000148;
        in_stack_00000170 = in_stack_00000140;
        in_stack_00000188 = in_stack_00000158;
        in_stack_00000180 = in_stack_00000150;
        if (*unaff_x22 == 0) goto LAB_066cbe70;
        FUN_043e994c(&stack0x00000130,*unaff_x22,iVar5,*unaff_x20);
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
        dVar16 = in_stack_00000140;
        uVar13 = FUN_066cafcc(&stack0x000000c0,&stack0x00000090);
        if (lVar6 == 0) goto LAB_066cbe70;
        lVar7 = *(long *)(lVar6 + 0x10);
        lVar9 = *(long *)
                 System_Collections_Generic_List<OVRPassthroughLayer_DeferredPassthroughMeshAddition>_TypeInfo
        ;
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (lVar7 == 0) goto LAB_066cbe70;
        uVar1 = *(uint *)(lVar6 + 0x18);
        if (uVar1 < *(uint *)(lVar7 + 0x18)) {
          lVar7 = lVar7 + (long)(int)uVar1 * 0x10;
          *(uint *)(lVar6 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar7 + 0x20) = uVar13;
          *(double *)(lVar7 + 0x28) = dVar16;
        }
        else {
          FUN_0437f300(lVar6,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
        }
        iVar5 = iVar5 + 1;
      } while (unaff_w26 != iVar5);
    }
    lVar6 = *(long *)(unaff_x19 + 0x28);
    if (*(uint *)(lVar11 + 0x28) < 2) {
      if (*unaff_x22 == 0) break;
      FUN_043e994c(&stack0x00000130,*unaff_x22,unaff_w25,*unaff_x20);
      in_stack_00000168 = in_stack_00000138;
      in_stack_00000160 = in_stack_00000130;
      in_stack_00000178 = in_stack_00000148;
      in_stack_00000170 = in_stack_00000140;
      in_stack_00000188 = in_stack_00000158;
      in_stack_00000180 = in_stack_00000150;
      if (*unaff_x22 == 0) break;
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
      param_2 = in_stack_00000140;
      uVar13 = FUN_066cafcc(&stack0x00000060,&stack0x00000030);
      if (lVar6 == 0) break;
    }
    else {
      if (lVar6 == 0) break;
      FUN_0437effc(lVar6,unaff_w26 + -2,
                   *(undefined8 *)
                    System_Collections_Generic_List<OVRPermissionsRequester_Permission>_TypeInfo);
      in_stack_00000160 = 0;
      in_stack_00000168 = 0.0;
      FUN_066bd8a0(&stack0x00000160,0);
      uVar13 = in_stack_00000160;
      param_2 = in_stack_00000168;
    }
    lVar7 = *(long *)(lVar6 + 0x10);
    lVar9 = *(long *)
             System_Collections_Generic_List<OVRPassthroughLayer_DeferredPassthroughMeshAddition>_TypeInfo
    ;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    if (lVar7 == 0) break;
    uVar1 = *(uint *)(lVar6 + 0x18);
    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
      lVar7 = lVar7 + (long)(int)uVar1 * 0x10;
      *(uint *)(lVar6 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar7 + 0x20) = uVar13;
      *(double *)(lVar7 + 0x28) = param_2;
    }
    else {
      FUN_0437f300(lVar6,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
    }
    puVar10 = (undefined8 *)System_Collections_Generic_List<XRInputSubsystemDescriptor>_TypeInfo;
    if (*(int *)(lVar11 + 0x28) == 1) {
      uStack0000000000000128 = unaff_w25;
      if (0 < unaff_w26) {
        iVar5 = 0;
        do {
          FUN_066cbea4();
          iVar5 = iVar5 + 1;
        } while (unaff_w26 != iVar5);
      }
      lVar11 = *unaff_x29;
      if (lVar11 == 0) break;
      lVar6 = *in_stack_00000018;
      lVar7 = *(long *)(lVar11 + 0x10);
      lVar9 = *(long *)System_Collections_Generic_List<EasyTouchTrigger_EasyTouchReceiver>_TypeInfo;
      *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
      if (lVar7 == 0) break;
      uVar1 = *(uint *)(lVar11 + 0x18);
      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(lVar11 + 0x18) = uVar1 + 1;
        plVar8 = (long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
        *plVar8 = lVar6;
        thunk_FUN_03048534(plVar8);
      }
      else {
        FUN_044302e8(lVar11,lVar6,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70))
        ;
      }
      uVar13 = thunk_FUN_0301080c(*(undefined8 *)System_Collections_Generic_List<XRView>_TypeInfo);
      FUN_043e93e8(uVar13,*(undefined8 *)System_Collections_Generic_List<XmlAttribute>_TypeInfo);
      *(undefined8 *)(unaff_x19 + 0x20) = uVar13;
      thunk_FUN_03048534(in_stack_00000018,uVar13);
      puVar4 = System_Collections_Generic_List<OVRPermissionsRequester_Permission>_TypeInfo;
      if (*(long *)(unaff_x19 + 0x28) == 0) break;
      dVar14 = (double)FUN_0437effc(*(long *)(unaff_x19 + 0x28),unaff_w25,
                                    *(undefined8 *)
                                     System_Collections_Generic_List<OVRPermissionsRequester_Permission>_TypeInfo
                                   );
      lVar11 = *(long *)(unaff_x19 + 0x28);
      dVar16 = param_2;
      iVar5 = unaff_w26;
      if (0 < (int)unaff_w25) {
        do {
          if (lVar11 == 0) goto LAB_066cbe70;
          dVar15 = (double)FUN_0437effc(lVar11,iVar5 + -2,*(undefined8 *)puVar4);
          if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_066cbe70;
          iVar3 = iVar5 + -1;
          FUN_0437effc(*(long *)(unaff_x19 + 0x28),iVar5 + -2,*(undefined8 *)puVar4);
          in_stack_00000160 = 0;
          in_stack_00000168 = 0.0;
          FUN_066bd898(-dVar15,-dVar16,&stack0x00000160,0);
          dVar16 = in_stack_00000168;
          FUN_0437f054(in_stack_00000160,lVar11,iVar3,
                       *(undefined8 *)
                        System_Collections_Generic_List<OVRRaycaster_RaycastHit>_TypeInfo);
          lVar11 = *(long *)(unaff_x19 + 0x28);
          iVar5 = iVar3;
        } while (1 < iVar3);
      }
      in_stack_00000160 = 0;
      in_stack_00000168 = 0.0;
      FUN_066bd898(-dVar14,-param_2,&stack0x00000160,0);
      if (lVar11 == 0) break;
      FUN_0437f054(in_stack_00000160,in_stack_00000168,lVar11,0,
                   *(undefined8 *)System_Collections_Generic_List<OVRRaycaster_RaycastHit>_TypeInfo)
      ;
      uStack0000000000000128 = 0;
      if (-1 < (int)unaff_w25) {
        do {
          unaff_w26 = unaff_w26 + -1;
          FUN_066cbea4();
        } while (0 < unaff_w26);
      }
      lVar11 = *in_stack_00000010;
      puVar10 = (undefined8 *)System_Collections_Generic_List<XRInputSubsystemDescriptor>_TypeInfo;
      unaff_x29 = in_stack_00000010;
      goto joined_r0x066cbe6c;
    }
    if (*(int *)(lVar11 + 0x28) == 0) {
      uStack000000000000012c = unaff_w25;
      if (0 < unaff_w26) {
        iVar5 = 0;
        do {
          FUN_066cbea4();
          iVar5 = iVar5 + 1;
        } while (unaff_w26 != iVar5);
      }
      goto LAB_066cba14;
    }
    in_stack_00000120._4_4_ = 0;
    if (1 < (int)unaff_w25) {
      iVar5 = 2;
      do {
        FUN_066cbea4();
        iVar5 = iVar5 + 1;
      } while (unaff_w26 != iVar5);
    }
    unaff_x27 = *(long *)(unaff_x19 + 0x28);
    *(undefined8 *)(unaff_x19 + 0x38) = 0;
    puVar4 = System_Collections_Generic_List<OVRPermissionsRequester_Permission>_TypeInfo;
    if (unaff_x27 == 0) break;
    unaff_d9 = (double)FUN_0437effc(unaff_x27,unaff_w25,
                                    *(undefined8 *)
                                     System_Collections_Generic_List<OVRPermissionsRequester_Permission>_TypeInfo
                                   );
    param_3 = *(long *)(unaff_x19 + 0x28);
    if (param_3 == 0) break;
    param_5 = *(undefined8 *)puVar4;
    param_4 = (ulong)unaff_w25;
  }
LAB_066cbe70:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


