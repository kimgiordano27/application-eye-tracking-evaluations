/*
FUNCTION_NAME: OVRPlugin$$SendEvent
ENTRY_POINT: 02c23a5c
PROGRAM: sharks-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__SendEvent(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *in_x9;
  undefined8 *unaff_x19;
  long *plVar3;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined4 uStack0000000000000058;
  undefined4 uStack000000000000005c;
  undefined8 in_stack_00000060;
  undefined4 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  undefined8 in_stack_00000080;
  undefined4 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined4 uStack0000000000000098;
  undefined4 uStack000000000000009c;
  undefined8 in_stack_000000a0;
  undefined4 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined4 uStack00000000000000b8;
  undefined4 uStack00000000000000bc;
  undefined8 in_stack_000000c0;
  undefined4 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined4 uStack00000000000000d8;
  undefined4 uStack00000000000000dc;
  undefined8 in_stack_000000e0;
  undefined4 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined4 uStack00000000000000f8;
  undefined4 uStack00000000000000fc;
  undefined8 in_stack_00000100;
  undefined4 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined4 uStack0000000000000118;
  undefined4 uStack000000000000011c;
  undefined8 in_stack_00000120;
  undefined4 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined4 uStack0000000000000138;
  undefined4 uStack000000000000013c;
  undefined8 in_stack_00000140;
  undefined4 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined4 uStack0000000000000158;
  undefined4 uStack000000000000015c;
  undefined8 in_stack_00000160;
  undefined4 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined4 uStack0000000000000178;
  undefined4 uStack000000000000017c;
  undefined8 in_stack_00000180;
  undefined4 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined4 uStack0000000000000198;
  undefined4 uStack000000000000019c;
  undefined8 in_stack_000001a0;
  undefined4 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined4 uStack00000000000001b8;
  undefined4 uStack00000000000001bc;
  undefined8 in_stack_000001c0;
  undefined4 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined4 uStack00000000000001d8;
  undefined4 uStack00000000000001dc;
  undefined8 in_stack_000001e0;
  undefined4 in_stack_000001e8;
  
  (*in_x9)();
  plVar3 = (long *)*unaff_x19;
  uVar1 = thunk_FUN_018617ec(*unaff_x23,&stack0x0000045c);
  FUN_02beeb9c(&stack0x00000450,0,0x61,0,0,0,0);
  uVar2 = thunk_FUN_018617ec(*unaff_x22,&stack0x00000440);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x318))(plVar3,uVar1,uVar2,*(undefined8 *)(*plVar3 + 800));
    plVar3 = (long *)*unaff_x19;
    uVar1 = thunk_FUN_018617ec(*unaff_x23,&stack0x0000043c);
    FUN_02beeb9c(&stack0x00000430,0,99,0,0,0,0);
    uVar2 = thunk_FUN_018617ec(*unaff_x22,&stack0x00000420);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x318))(plVar3,uVar1,uVar2,*(undefined8 *)(*plVar3 + 800));
      plVar3 = (long *)*unaff_x19;
      uVar1 = thunk_FUN_018617ec(*unaff_x23,&stack0x0000041c);
      FUN_02beeb9c(&stack0x00000410,0,9,1,0,0,0);
      uVar2 = thunk_FUN_018617ec(*unaff_x22,&stack0x00000400);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x318))(plVar3,uVar1,uVar2,*(undefined8 *)(*plVar3 + 800));
        plVar3 = (long *)*unaff_x19;
        uVar1 = thunk_FUN_018617ec(*unaff_x23,&stack0x000003fc);
        FUN_02beeb9c(&stack0x000003f0,0,0x24,0,0,0,0);
        uVar2 = thunk_FUN_018617ec(*unaff_x22,&stack0x000003e0);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x318))(plVar3,uVar1,uVar2,*(undefined8 *)(*plVar3 + 800));
          plVar3 = (long *)*unaff_x19;
          uVar1 = thunk_FUN_018617ec(*unaff_x23,&stack0x000003dc);
          FUN_02beeb9c(&stack0x000003d0,0x43,0x43,0,1,0,0);
          uVar2 = thunk_FUN_018617ec(*unaff_x22,&stack0x000003c0);
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 0x318))(plVar3,uVar1,uVar2,*(undefined8 *)(*plVar3 + 800));
            plVar3 = (long *)*unaff_x19;
            uVar1 = thunk_FUN_018617ec(*unaff_x23,&stack0x000003bc);
            FUN_02beeb9c(&stack0x000003b0,0,0x23,0,0,0,0);
            uVar2 = thunk_FUN_018617ec(*unaff_x22,&stack0x000003a0);
            if (plVar3 != (long *)0x0) {
              (**(code **)(*plVar3 + 0x318))(plVar3,uVar1,uVar2,*(undefined8 *)(*plVar3 + 800));
              plVar3 = (long *)*unaff_x19;
              uVar1 = thunk_FUN_018617ec(*unaff_x23,&stack0x0000039c);
              FUN_02beeb9c(&stack0x00000390,10,0xd,0,0,0,0);
              uVar2 = thunk_FUN_018617ec(*unaff_x22,&stack0x00000380);
              if (plVar3 != (long *)0x0) {
                (**(code **)(*plVar3 + 0x318))(plVar3,uVar1,uVar2,*(undefined8 *)(*plVar3 + 800));
                plVar3 = (long *)*unaff_x19;
                uVar1 = thunk_FUN_018617ec(*unaff_x23,&stack0x0000037c);
                FUN_02beeb9c(&stack0x00000370,0,0x2f,0,0,0,0);
                uVar2 = thunk_FUN_018617ec(*unaff_x22,&stack0x00000360);
                if (plVar3 != (long *)0x0) {
                  (**(code **)(*plVar3 + 0x318))(plVar3,uVar1,uVar2,*(undefined8 *)(*plVar3 + 800));
                  plVar3 = (long *)*unaff_x19;
                  uVar1 = thunk_FUN_018617ec(*unaff_x23,&stack0x0000035c);
                  FUN_02beeb9c(&stack0x00000350,0,0x2a,0,0,0,0);
                  uVar2 = thunk_FUN_018617ec(*unaff_x22,&stack0x00000340);
                  if (plVar3 != (long *)0x0) {
                    (**(code **)(*plVar3 + 0x318))
                              (plVar3,uVar1,uVar2,*(undefined8 *)(*plVar3 + 800));
                    plVar3 = (long *)*unaff_x19;
                    uVar1 = thunk_FUN_018617ec(*unaff_x23,&stack0x0000033c);
                    FUN_02beeb9c(&stack0x00000330,0x5a,0x5a,0,1,0,0);
                    uVar2 = thunk_FUN_018617ec(*unaff_x22,&stack0x00000320);
                    if (plVar3 != (long *)0x0) {
                      (**(code **)(*plVar3 + 0x318))
                                (plVar3,uVar1,uVar2,*(undefined8 *)(*plVar3 + 800));
                      plVar3 = (long *)*unaff_x19;
                      uVar1 = thunk_FUN_018617ec(*unaff_x23,&stack0x0000031c);
                      FUN_02beeb9c(&stack0x00000310,0,0x24,1,0,0,0);
                      uVar2 = thunk_FUN_018617ec(*unaff_x22,&stack0x00000300);
                      if (plVar3 != (long *)0x0) {
                        (**(code **)(*plVar3 + 0x318))
                                  (plVar3,uVar1,uVar2,*(undefined8 *)(*plVar3 + 800));
                        plVar3 = (long *)*unaff_x19;
                        uVar1 = thunk_FUN_018617ec(*unaff_x23,&stack0x000002fc);
                        FUN_02beeb9c(&stack0x000002f0,0x43,0x43,1,1,0,0);
                        uVar2 = thunk_FUN_018617ec(*unaff_x22,&stack0x000002e0);
                        if (plVar3 != (long *)0x0) {
                          (**(code **)(*plVar3 + 0x318))
                                    (plVar3,uVar1,uVar2,*(undefined8 *)(*plVar3 + 800));
                          plVar3 = (long *)*unaff_x19;
                          uVar1 = thunk_FUN_018617ec(*unaff_x23,&stack0x000002dc);
                          FUN_02beeb9c(&stack0x000002d0,9,0x2e,1,0,0,0);
                          uVar2 = thunk_FUN_018617ec(*unaff_x22,&stack0x000002c0);
                          if (plVar3 != (long *)0x0) {
                            (**(code **)(*plVar3 + 0x318))
                                      (plVar3,uVar1,uVar2,*(undefined8 *)(*plVar3 + 800));
                            plVar3 = (long *)*unaff_x19;
                            uVar1 = thunk_FUN_018617ec(*unaff_x23,&stack0x000002bc);
                            FUN_02beeb9c(&stack0x000002b0,0,0x2f,1,0,0,0);
                            uVar2 = thunk_FUN_018617ec(*unaff_x22,&stack0x000002a0);
                            if (plVar3 != (long *)0x0) {
                              (**(code **)(*plVar3 + 0x318))
                                        (plVar3,uVar1,uVar2,*(undefined8 *)(*plVar3 + 800));
                              plVar3 = (long *)*unaff_x19;
                              uVar1 = thunk_FUN_018617ec(*unaff_x23,&stack0x0000029c);
                              FUN_02beeb9c(&stack0x00000290,0,0x24,1,0,0,0);
                              uVar2 = thunk_FUN_018617ec(*unaff_x22,&stack0x00000280);
                              if (plVar3 != (long *)0x0) {
                                (**(code **)(*plVar3 + 0x318))
                                          (plVar3,uVar1,uVar2,*(undefined8 *)(*plVar3 + 800));
                                plVar3 = (long *)*unaff_x19;
                                uVar1 = thunk_FUN_018617ec(*unaff_x23,&stack0x0000027c);
                                FUN_02beeb9c(&stack0x00000270,0,0x25,1,0,0,0);
                                uVar2 = thunk_FUN_018617ec(*unaff_x22,&stack0x00000260);
                                if (plVar3 != (long *)0x0) {
                                  (**(code **)(*plVar3 + 0x318))
                                            (plVar3,uVar1,uVar2,*(undefined8 *)(*plVar3 + 800));
                                  plVar3 = (long *)*unaff_x19;
                                  uVar1 = thunk_FUN_018617ec(*unaff_x23,&stack0x0000025c);
                                  FUN_02beeb9c(&stack0x00000250,0,0x2a,1,0,0,0);
                                  uVar2 = thunk_FUN_018617ec(*unaff_x22,&stack0x00000240);
                                  if (plVar3 != (long *)0x0) {
                                    (**(code **)(*plVar3 + 0x318))
                                              (plVar3,uVar1,uVar2,*(undefined8 *)(*plVar3 + 800));
                                    plVar3 = (long *)*unaff_x19;
                                    uVar1 = thunk_FUN_018617ec(*unaff_x23,&stack0x0000023c);
                                    FUN_02beeb9c(&stack0x00000230,0,0x27,1,0,0,0);
                                    uVar2 = thunk_FUN_018617ec(*unaff_x22,&stack0x00000220);
                                    if (plVar3 != (long *)0x0) {
                                      (**(code **)(*plVar3 + 0x318))
                                                (plVar3,uVar1,uVar2,*(undefined8 *)(*plVar3 + 800));
                                      plVar3 = (long *)*unaff_x19;
                                      uVar1 = thunk_FUN_018617ec(*unaff_x23,&stack0x0000021c);
                                      FUN_02beeb9c(&stack0x00000210,0x5a,0x5a,1,0,0,0);
                                      uVar2 = thunk_FUN_018617ec(*unaff_x22,&stack0x00000200);
                                      if (plVar3 != (long *)0x0) {
                                        (**(code **)(*plVar3 + 0x318))
                                                  (plVar3,uVar1,uVar2,*(undefined8 *)(*plVar3 + 800)
                                                  );
                                        plVar3 = (long *)*unaff_x19;
                                        uVar1 = thunk_FUN_018617ec(*unaff_x23,&stack0x000001fc);
                                        FUN_02beeb9c(&stack0x000001f0,0,0x7a,0,0,0,0);
                                        in_stack_000001e0 = 0;
                                        in_stack_000001e8 = 0;
                                        uVar2 = thunk_FUN_018617ec(*unaff_x22,&stack0x000001e0);
                                        if (plVar3 != (long *)0x0) {
                                          (**(code **)(*plVar3 + 0x318))
                                                    (plVar3,uVar1,uVar2,
                                                     *(undefined8 *)(*plVar3 + 800));
                                          plVar3 = (long *)*unaff_x19;
                                          uStack00000000000001dc = 0xd9;
                                          uVar1 = thunk_FUN_018617ec(*unaff_x23,
                                                                     (long)&stack0x000001d8 + 4);
                                          uStack00000000000001d8 = 0;
                                          in_stack_000001d0 = 0;
                                          FUN_02beeb9c(&stack0x000001d0,0,0x7b,0,0,0,0);
                                          in_stack_000001c0 = in_stack_000001d0;
                                          in_stack_000001c8 = uStack00000000000001d8;
                                          uVar2 = thunk_FUN_018617ec(*unaff_x22,&stack0x000001c0);
                                          if (plVar3 != (long *)0x0) {
                                            (**(code **)(*plVar3 + 0x318))
                                                      (plVar3,uVar1,uVar2,
                                                       *(undefined8 *)(*plVar3 + 800));
                                            plVar3 = (long *)*unaff_x19;
                                            uStack00000000000001bc = 0xda;
                                            uVar1 = thunk_FUN_018617ec(*unaff_x23,
                                                                       (long)&stack0x000001b8 + 4);
                                            uStack00000000000001b8 = 0;
                                            in_stack_000001b0 = 0;
                                            FUN_02beeb9c(&stack0x000001b0,0,0x7c,0,0,0,0);
                                            in_stack_000001a0 = in_stack_000001b0;
                                            in_stack_000001a8 = uStack00000000000001b8;
                                            uVar2 = thunk_FUN_018617ec(*unaff_x22,&stack0x000001a0);
                                            if (plVar3 != (long *)0x0) {
                                              (**(code **)(*plVar3 + 0x318))
                                                        (plVar3,uVar1,uVar2,
                                                         *(undefined8 *)(*plVar3 + 800));
                                              plVar3 = (long *)*unaff_x19;
                                              uStack000000000000019c = 0xdb;
                                              uVar1 = thunk_FUN_018617ec(*unaff_x23,
                                                                         (long)&stack0x00000198 + 4)
                                              ;
                                              uStack0000000000000198 = 0;
                                              in_stack_00000190 = 0;
                                              FUN_02beeb9c(&stack0x00000190,0,0x7d,0,0,0,0);
                                              in_stack_00000180 = in_stack_00000190;
                                              in_stack_00000188 = uStack0000000000000198;
                                              uVar2 = thunk_FUN_018617ec(*unaff_x22,&stack0x00000180
                                                                        );
                                              if (plVar3 != (long *)0x0) {
                                                (**(code **)(*plVar3 + 0x318))
                                                          (plVar3,uVar1,uVar2,
                                                           *(undefined8 *)(*plVar3 + 800));
                                                plVar3 = (long *)*unaff_x19;
                                                uStack000000000000017c = 0xdc;
                                                uVar1 = thunk_FUN_018617ec(*unaff_x23,
                                                                           (long)&stack0x00000178 +
                                                                           4);
                                                uStack0000000000000178 = 0;
                                                in_stack_00000170 = 0;
                                                FUN_02beeb9c(&stack0x00000170,0,0x7e,0,0,0,0);
                                                in_stack_00000160 = in_stack_00000170;
                                                in_stack_00000168 = uStack0000000000000178;
                                                uVar2 = thunk_FUN_018617ec(*unaff_x22,
                                                                           &stack0x00000160);
                                                if (plVar3 != (long *)0x0) {
                                                  (**(code **)(*plVar3 + 0x318))
                                                            (plVar3,uVar1,uVar2,
                                                             *(undefined8 *)(*plVar3 + 800));
                                                  plVar3 = (long *)*unaff_x19;
                                                  uStack000000000000015c = 0xdd;
                                                  uVar1 = thunk_FUN_018617ec(*unaff_x23,
                                                                             (long)&stack0x00000158
                                                                             + 4);
                                                  uStack0000000000000158 = 0;
                                                  in_stack_00000150 = 0;
                                                  FUN_02beeb9c(&stack0x00000150,0,0x7f,0,0,0,0);
                                                  in_stack_00000140 = in_stack_00000150;
                                                  in_stack_00000148 = uStack0000000000000158;
                                                  uVar2 = thunk_FUN_018617ec(*unaff_x22,
                                                                             &stack0x00000140);
                                                  if (plVar3 != (long *)0x0) {
                                                    (**(code **)(*plVar3 + 0x318))
                                                              (plVar3,uVar1,uVar2,
                                                               *(undefined8 *)(*plVar3 + 800));
                                                    plVar3 = (long *)*unaff_x19;
                                                    uStack000000000000013c = 0xde;
                                                    uVar1 = thunk_FUN_018617ec(*unaff_x23,
                                                                               (long)&
                                                  stack0x00000138 + 4);
                                                  uStack0000000000000138 = 0;
                                                  in_stack_00000130 = 0;
                                                  FUN_02beeb9c(&stack0x00000130,0,0x80,0,0,0,0);
                                                  in_stack_00000120 = in_stack_00000130;
                                                  in_stack_00000128 = uStack0000000000000138;
                                                  uVar2 = thunk_FUN_018617ec(*unaff_x22,
                                                                             &stack0x00000120);
                                                  if (plVar3 != (long *)0x0) {
                                                    (**(code **)(*plVar3 + 0x318))
                                                              (plVar3,uVar1,uVar2,
                                                               *(undefined8 *)(*plVar3 + 800));
                                                    plVar3 = (long *)*unaff_x19;
                                                    uStack000000000000011c = 0xdf;
                                                    uVar1 = thunk_FUN_018617ec(*unaff_x23,
                                                                               (long)&
                                                  stack0x00000118 + 4);
                                                  uStack0000000000000118 = 0;
                                                  in_stack_00000110 = 0;
                                                  FUN_02beeb9c(&stack0x00000110,0,0x81,0,0,0,0);
                                                  in_stack_00000100 = in_stack_00000110;
                                                  in_stack_00000108 = uStack0000000000000118;
                                                  uVar2 = thunk_FUN_018617ec(*unaff_x22,
                                                                             &stack0x00000100);
                                                  if (plVar3 != (long *)0x0) {
                                                    (**(code **)(*plVar3 + 0x318))
                                                              (plVar3,uVar1,uVar2,
                                                               *(undefined8 *)(*plVar3 + 800));
                                                    plVar3 = (long *)*unaff_x19;
                                                    uStack00000000000000fc = 0xe0;
                                                    uVar1 = thunk_FUN_018617ec(*unaff_x23,
                                                                               (long)&
                                                  stack0x000000f8 + 4);
                                                  uStack00000000000000f8 = 0;
                                                  in_stack_000000f0 = 0;
                                                  FUN_02beeb9c(&stack0x000000f0,0,0x82,0,0,0,0);
                                                  in_stack_000000e0 = in_stack_000000f0;
                                                  in_stack_000000e8 = uStack00000000000000f8;
                                                  uVar2 = thunk_FUN_018617ec(*unaff_x22,
                                                                             &stack0x000000e0);
                                                  if (plVar3 != (long *)0x0) {
                                                    (**(code **)(*plVar3 + 0x318))
                                                              (plVar3,uVar1,uVar2,
                                                               *(undefined8 *)(*plVar3 + 800));
                                                    plVar3 = (long *)*unaff_x19;
                                                    uStack00000000000000dc = 0xe1;
                                                    uVar1 = thunk_FUN_018617ec(*unaff_x23,
                                                                               (long)&
                                                  stack0x000000d8 + 4);
                                                  uStack00000000000000d8 = 0;
                                                  in_stack_000000d0 = 0;
                                                  FUN_02beeb9c(&stack0x000000d0,0,0x83,0,0,0,0);
                                                  in_stack_000000c0 = in_stack_000000d0;
                                                  in_stack_000000c8 = uStack00000000000000d8;
                                                  uVar2 = thunk_FUN_018617ec(*unaff_x22,
                                                                             &stack0x000000c0);
                                                  if (plVar3 != (long *)0x0) {
                                                    (**(code **)(*plVar3 + 0x318))
                                                              (plVar3,uVar1,uVar2,
                                                               *(undefined8 *)(*plVar3 + 800));
                                                    plVar3 = (long *)*unaff_x19;
                                                    uStack00000000000000bc = 0xe2;
                                                    uVar1 = thunk_FUN_018617ec(*unaff_x23,
                                                                               (long)&
                                                  stack0x000000b8 + 4);
                                                  uStack00000000000000b8 = 0;
                                                  in_stack_000000b0 = 0;
                                                  FUN_02beeb9c(&stack0x000000b0,0,0x84,0,0,0,0);
                                                  in_stack_000000a0 = in_stack_000000b0;
                                                  in_stack_000000a8 = uStack00000000000000b8;
                                                  uVar2 = thunk_FUN_018617ec(*unaff_x22,
                                                                             &stack0x000000a0);
                                                  if (plVar3 != (long *)0x0) {
                                                    (**(code **)(*plVar3 + 0x318))
                                                              (plVar3,uVar1,uVar2,
                                                               *(undefined8 *)(*plVar3 + 800));
                                                    plVar3 = (long *)*unaff_x19;
                                                    uStack000000000000009c = 0xe3;
                                                    uVar1 = thunk_FUN_018617ec(*unaff_x23,
                                                                               (long)&
                                                  stack0x00000098 + 4);
                                                  uStack0000000000000098 = 0;
                                                  in_stack_00000090 = 0;
                                                  FUN_02beeb9c(&stack0x00000090,0,0x85,0,0,0,0);
                                                  in_stack_00000080 = in_stack_00000090;
                                                  in_stack_00000088 = uStack0000000000000098;
                                                  uVar2 = thunk_FUN_018617ec(*unaff_x22,
                                                                             &stack0x00000080);
                                                  if (plVar3 != (long *)0x0) {
                                                    (**(code **)(*plVar3 + 0x318))
                                                              (plVar3,uVar1,uVar2,
                                                               *(undefined8 *)(*plVar3 + 800));
                                                    plVar3 = (long *)*unaff_x19;
                                                    uStack000000000000007c = 0xe4;
                                                    uVar1 = thunk_FUN_018617ec(*unaff_x23,
                                                                               (long)&
                                                  stack0x00000078 + 4);
                                                  uStack0000000000000078 = 0;
                                                  in_stack_00000070 = 0;
                                                  FUN_02beeb9c(&stack0x00000070,0,0x86,0,0,0,0);
                                                  in_stack_00000060 = in_stack_00000070;
                                                  in_stack_00000068 = uStack0000000000000078;
                                                  uVar2 = thunk_FUN_018617ec(*unaff_x22,
                                                                             &stack0x00000060);
                                                  if (plVar3 != (long *)0x0) {
                                                    (**(code **)(*plVar3 + 0x318))
                                                              (plVar3,uVar1,uVar2,
                                                               *(undefined8 *)(*plVar3 + 800));
                                                    plVar3 = (long *)*unaff_x19;
                                                    uStack000000000000005c = 0xe5;
                                                    uVar1 = thunk_FUN_018617ec(*unaff_x23,
                                                                               (long)&
                                                  stack0x00000058 + 4);
                                                  uStack0000000000000058 = 0;
                                                  in_stack_00000050 = 0;
                                                  FUN_02beeb9c(&stack0x00000050,0,0x87,0,0,0,0);
                                                  in_stack_00000040 = in_stack_00000050;
                                                  in_stack_00000048 = uStack0000000000000058;
                                                  uVar2 = thunk_FUN_018617ec(*unaff_x22,
                                                                             &stack0x00000040);
                                                  if (plVar3 != (long *)0x0) {
                                                    (**(code **)(*plVar3 + 0x318))
                                                              (plVar3,uVar1,uVar2,
                                                               *(undefined8 *)(*plVar3 + 800));
                                                    plVar3 = (long *)*unaff_x19;
                                                    uStack000000000000003c = 0x3b;
                                                    uVar1 = thunk_FUN_018617ec(*unaff_x23,
                                                                               (long)&
                                                  stack0x00000038 + 4);
                                                  uStack0000000000000038 = 0;
                                                  in_stack_00000030 = 0;
                                                  FUN_02beeb9c(&stack0x00000030,0,0x2e,0,0,0,0);
                                                  in_stack_00000020 = in_stack_00000030;
                                                  in_stack_00000028 = uStack0000000000000038;
                                                  uVar2 = thunk_FUN_018617ec(*unaff_x22,
                                                                             &stack0x00000020);
                                                  if (plVar3 != (long *)0x0) {
                                                    (**(code **)(*plVar3 + 0x318))
                                                              (plVar3,uVar1,uVar2,
                                                               *(undefined8 *)(*plVar3 + 800));
                                                    plVar3 = (long *)*unaff_x19;
                                                    uStack000000000000001c = 0x4d;
                                                    uVar1 = thunk_FUN_018617ec(*unaff_x23,
                                                                               (long)&
                                                  stack0x00000018 + 4);
                                                  uStack0000000000000018 = 0;
                                                  in_stack_00000010 = 0;
                                                  FUN_02beeb9c(&stack0x00000010,0,0x2d,0,0,0,0);
                                                  uVar2 = thunk_FUN_018617ec(*unaff_x22);
                                                  if (plVar3 != (long *)0x0) {
                                                    (**(code **)(*plVar3 + 0x318))
                                                              (plVar3,uVar1,uVar2,
                                                               *(undefined8 *)(*plVar3 + 800));
                                                    return;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


