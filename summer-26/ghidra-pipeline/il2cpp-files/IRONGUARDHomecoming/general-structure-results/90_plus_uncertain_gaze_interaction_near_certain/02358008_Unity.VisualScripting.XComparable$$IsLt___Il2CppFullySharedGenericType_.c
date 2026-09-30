/*
FUNCTION_NAME: Unity.VisualScripting.XComparable$$IsLt<__Il2CppFullySharedGenericType>
ENTRY_POINT: 02358008
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 111
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_6;functionality_gaze_interaction_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x02358338) */
/* WARNING: Removing unreachable block (ram,0x023583f0) */

bool Unity_VisualScripting_XComparable__IsLt<__Il2CppFullySharedGenericType>
               (undefined1 param_1 [16])

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined8 *unaff_x19;
  long unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  undefined8 uVar10;
  void *in_stack_00000010;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000080;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 uStack0000000000000160;
  undefined8 uStack0000000000000168;
  undefined8 uStack0000000000000170;
  undefined8 uStack0000000000000178;
  char cStack0000000000000180;
  undefined8 uStack0000000000000190;
  undefined8 uStack00000000000001a0;
  undefined8 uStack00000000000001b0;
  undefined8 uStack00000000000001c0;
  undefined8 uStack00000000000001d0;
  
  uStack0000000000000168 = param_1._8_8_;
  uStack0000000000000160 = param_1._0_8_;
  uStack00000000000001d0 = 0;
  uStack0000000000000170 = uStack0000000000000160;
  uStack0000000000000178 = uStack0000000000000168;
  _cStack0000000000000180 = uStack0000000000000160;
  uStack0000000000000190 = uStack0000000000000160;
  uStack00000000000001a0 = uStack0000000000000160;
  uStack00000000000001b0 = uStack0000000000000160;
  uStack00000000000001c0 = uStack0000000000000160;
  plVar5 = (long *)FUN_02616410(&stack0x000001e0,*(undefined8 *)(*(long *)(unaff_x22 + 0x38) + 0x10)
                               );
  puVar4 = Method_UnityEngine_Component_GetComponent<BaseUIEffect>__;
  puVar3 = Method_UnityEngine_Component_GetComponent<Animator>__;
  puVar2 = Method_UnityEngine_Component_GetComponent<Anchor>__;
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
LAB_0235806c:
  do {
    lVar7 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_023580b8;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar1,0);
LAB_023580b8:
    uVar8 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    if ((uVar8 & 1) == 0) break;
    lVar7 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_02358114;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar3,0);
LAB_02358114:
    (*(code *)*puVar6)(&stack0x00000020,plVar5,puVar6[1]);
    in_stack_00000148 = in_stack_00000028;
    in_stack_00000140 = in_stack_00000020;
    in_stack_00000150 = in_stack_00000030;
    FUN_02359c38(&stack0x00000020,&stack0x00000140);
    memcpy(&stack0x000000f0,&stack0x00000020,0x50);
    uVar8 = FUN_03b56294(&stack0x000000f0,0);
    if (((uVar8 & 1) == 0) && ((in_stack_000000f0._4_4_ <= 0.0 || ((unaff_x23 & 1) == 0)))) {
      FUN_03b5656c(&stack0x000000f0,0);
      goto LAB_0235806c;
    }
    if (unaff_x24 == 0) {
LAB_023581b0:
      if (cStack0000000000000180 != '\0') {
        FUN_03337264(&stack0x00000020,&stack0x00000180,
                     *(undefined8 *)Method_UnityEngine_Component_GetComponent<Button>__);
        memcpy(&stack0x00000080,&stack0x00000020,0x50);
        if (in_stack_000000f0._4_4_ <= in_stack_00000080._4_4_) {
          FUN_03b5656c(&stack0x000000f0,0);
          goto LAB_0235806c;
        }
        if (cStack0000000000000180 != '\0') {
          memcpy(&stack0x00000080,(void *)((ulong)&stack0x00000180 | 8),0x50);
          FUN_03b5656c(&stack0x00000080,0);
        }
      }
      uVar10 = *(undefined8 *)puVar4;
      in_stack_00000070 = 0;
      in_stack_00000058 = 0;
      in_stack_00000050 = 0;
      in_stack_00000068 = 0;
      in_stack_00000060 = 0;
      in_stack_00000038 = 0;
      in_stack_00000030 = 0;
      in_stack_00000048 = 0;
      in_stack_00000040 = 0;
      in_stack_00000028 = 0;
      in_stack_00000020 = 0;
      memcpy(&stack0x00000210,&stack0x000000f0,0x50);
      FUN_0333722c(&stack0x00000020,&stack0x00000210,uVar10);
      memcpy(&stack0x00000180,&stack0x00000020,0x58);
      FUN_0332df1c(&stack0x00000210,&stack0x000001f0,*(undefined8 *)puVar2);
      uStack0000000000000168 = 0;
      uStack0000000000000160 = 0;
      uStack0000000000000178 = 0;
      uStack0000000000000170 = 0;
      goto LAB_0235806c;
    }
    FUN_03b562c4(&stack0x00000020,&stack0x000000f0,0);
    in_stack_000000d8 = in_stack_00000028;
    in_stack_000000d0 = in_stack_00000020;
    in_stack_000000e8 = in_stack_00000038;
    in_stack_000000e0 = in_stack_00000030;
    uVar8 = FUN_02f1f898(&stack0x000000d0);
    if ((uVar8 & 1) != 0) goto LAB_023581b0;
    FUN_03b5656c(&stack0x000000f0,0);
  } while( true );
  if (plVar5 != (long *)0x0) {
    lVar7 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_02358320;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_01ecb238(plVar5,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_02358320:
    (*(code *)*puVar6)(plVar5,puVar6[1]);
  }
  memcpy(in_stack_00000010,(void *)((ulong)&stack0x00000180 | 8),0x50);
  thunk_FUN_01f51358((long)in_stack_00000010 + 0x48,0);
  unaff_x19[2] = uStack0000000000000178;
  unaff_x19[1] = uStack0000000000000170;
  *unaff_x19 = uStack0000000000000168;
  thunk_FUN_01f51358(unaff_x19,0);
  return cStack0000000000000180 != '\0';
}


