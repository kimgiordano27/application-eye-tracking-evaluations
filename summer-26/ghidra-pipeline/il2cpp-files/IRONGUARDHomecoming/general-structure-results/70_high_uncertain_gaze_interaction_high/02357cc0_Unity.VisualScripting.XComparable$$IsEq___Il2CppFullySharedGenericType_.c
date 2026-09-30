/*
FUNCTION_NAME: Unity.VisualScripting.XComparable$$IsEq<__Il2CppFullySharedGenericType>
ENTRY_POINT: 02357cc0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_interaction_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;functionality_gaze_interaction_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x02357db8) */
/* WARNING: Removing unreachable block (ram,0x02357e34) */

bool Unity_VisualScripting_XComparable__IsEq<__Il2CppFullySharedGenericType>(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *unaff_x20;
  long *unaff_x21;
  ulong unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x27;
  undefined8 unaff_x28;
  long *unaff_x29;
  void *in_stack_00000008;
  undefined8 *in_stack_00000010;
  void *in_stack_00000018;
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
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  char in_stack_00000180;
  
  do {
    FUN_0333722c(param_1,&stack0x00000210,unaff_x28);
    memcpy(&stack0x00000180,&stack0x00000020,0x58);
    FUN_0332df1c(&stack0x00000210,&stack0x000001f0,*unaff_x27);
    in_stack_00000168 = 0;
    in_stack_00000160 = 0;
    in_stack_00000178 = 0;
    in_stack_00000170 = 0;
LAB_02357ae0:
    lVar2 = *unaff_x21;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x29) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_02357b2c;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
LAB_02357b2c:
    uVar3 = (*(code *)*puVar1)();
    if ((uVar3 & 1) == 0) {
      if (unaff_x21 == (long *)0x0) goto LAB_02357dac;
      lVar2 = *unaff_x21;
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar3 == 0) goto LAB_02357d84;
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      break;
    }
    lVar2 = *unaff_x21;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x20) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_02357b88;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
LAB_02357b88:
    (*(code *)*puVar1)(&stack0x00000020);
    in_stack_00000148 = in_stack_00000028;
    in_stack_00000140 = in_stack_00000020;
    in_stack_00000150 = in_stack_00000030;
    FUN_02359450(&stack0x00000020,&stack0x00000140);
    memcpy(&stack0x000000f0,&stack0x00000020,0x50);
    uVar3 = FUN_03b56294(&stack0x000000f0,0);
    if (((uVar3 & 1) == 0) && ((in_stack_000000f0._4_4_ <= 0.0 || ((unaff_x22 & 1) == 0)))) {
      FUN_03b5656c(&stack0x000000f0,0);
      goto LAB_02357ae0;
    }
    if (unaff_x23 != 0) {
      FUN_03b562c4(&stack0x00000020,&stack0x000000f0,0);
      in_stack_000000d8 = in_stack_00000028;
      in_stack_000000d0 = in_stack_00000020;
      in_stack_000000e8 = in_stack_00000038;
      in_stack_000000e0 = in_stack_00000030;
      uVar3 = FUN_02f1f898(&stack0x000000d0);
      if ((uVar3 & 1) == 0) {
        FUN_03b5656c(&stack0x000000f0,0);
        goto LAB_02357ae0;
      }
    }
    if (in_stack_00000180 == '\0') goto LAB_02357c8c;
    FUN_03337264(&stack0x00000020,&stack0x00000180,
                 *(undefined8 *)Method_UnityEngine_Component_GetComponent<Button>__);
    memcpy(&stack0x00000080,&stack0x00000020,0x50);
    if (in_stack_000000f0._4_4_ <= in_stack_00000080._4_4_) {
      FUN_03b5656c(&stack0x000000f0,0);
      goto LAB_02357ae0;
    }
    if (in_stack_00000180 != '\0') {
      memcpy(&stack0x00000080,in_stack_00000018,0x50);
      FUN_03b5656c(&stack0x00000080,0);
    }
LAB_02357c8c:
    in_stack_00000070 = 0;
    in_stack_00000068 = 0;
    in_stack_00000060 = 0;
    unaff_x28 = *(undefined8 *)Method_UnityEngine_Component_GetComponent<BaseUIEffect>__;
    in_stack_00000048 = 0;
    in_stack_00000040 = 0;
    in_stack_00000058 = 0;
    in_stack_00000050 = 0;
    in_stack_00000028 = 0;
    in_stack_00000020 = 0;
    in_stack_00000038 = 0;
    in_stack_00000030 = 0;
    memcpy(&stack0x00000210,&stack0x000000f0,0x50);
    param_1 = &stack0x00000020;
  } while( true );
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar4 = piVar4 + 4;
    if (uVar3 == 0) break;
    if (*(long *)(piVar4 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
      goto LAB_02357da0;
    }
  }
LAB_02357d84:
  puVar1 = (undefined8 *)FUN_01ecb238();
LAB_02357da0:
  (*(code *)*puVar1)();
LAB_02357dac:
  memcpy(in_stack_00000008,(void *)((ulong)&stack0x00000180 | 8),0x50);
  thunk_FUN_01f51358((long)in_stack_00000008 + 0x48,0);
  in_stack_00000010[2] = in_stack_00000178;
  in_stack_00000010[1] = in_stack_00000170;
  *in_stack_00000010 = in_stack_00000168;
  thunk_FUN_01f51358(in_stack_00000010,0);
  return in_stack_00000180 != '\0';
}


